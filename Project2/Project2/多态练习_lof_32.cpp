#include <iostream>
using namespace std;

class CPU
{
public:
	//纯虚函数
	virtual void cpu_processing() = 0;
};

class memory
{
public:
	//纯虚函数
	virtual void memory_loading() = 0;
};

class GPU
{
public:
	//纯虚函数
	virtual void GPU_Display() = 0;
};

class computer
{
public:
	//含参构造
	computer(CPU* n_cpu, memory* n_memory, GPU* n_GPU)
	{
		c_cpu = n_cpu;
		c_memory = n_memory;
		c_GPU = n_GPU;
	}
	//运行三个属性的func
	void run()
	{
		c_cpu->cpu_processing();
		c_memory->memory_loading();
		c_GPU->GPU_Display();
	}
	//析构函数
	~computer()
	{
		if (c_cpu != NULL)
		{
			delete c_cpu;
			cout << "电脑cpu回收" << endl;
			c_cpu = NULL;
		}
		if (c_memory != NULL)
		{
			delete c_memory;
			cout << "电脑内存回收" << endl;
			c_memory = NULL;
		}
		if (c_GPU != NULL)
		{
			delete c_GPU;
			cout << "电脑gpu回收" << endl;
			c_GPU = NULL;
		}
	}
	CPU* c_cpu;
	memory* c_memory;
	GPU* c_GPU;
};


class intel_cpu:public CPU
{
public:
	//纯虚函数
	virtual void cpu_processing()
	{
		cout << "intel cpu running" << endl;
	};
};

class intel_men:public memory
{
public:
	//纯虚函数
	virtual void memory_loading()
	{
		cout << "intel mem running" << endl;
	};
};

class intel_gpu:public GPU
{
public:
	//纯虚函数
	virtual void GPU_Display()
	{
		cout << "intel gpu running" << endl;
	};
};


void test_32_func()
{
	CPU* cpu_pointer = new intel_cpu;
	memory* mem_pointer = new intel_men;
	GPU* gpu_pointer = new intel_gpu;

	computer comp_type1 = computer(cpu_pointer, mem_pointer, gpu_pointer);

	comp_type1.run();

}

int main_32()
{
	test_32_func();

	system("pause");
	return 0;
}