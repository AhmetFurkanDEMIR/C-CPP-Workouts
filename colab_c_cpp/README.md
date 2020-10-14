# Running C / C ++ code through Colab

In this article, we will learn how to compile C / C ++ codes over the GPU, and all these processes will be done via Google Colab.

Let's run the code block below and find out what is "nvcc" installation and version.

**Input :**
```linux
!nvcc --version
```

**Output :**
```linux
nvcc: NVIDIA (R) Cuda compiler driver
Copyright (c) 2005-2019 NVIDIA Corporation
Built on Sun_Jul_28_19:07:16_PDT_2019
Cuda compilation tools, release 10.1, V10.1.243
```

As you can see on the output, we will compile the "nvcc: NVIDIA (R) Cuda compiler driver", that is, the codes we wrote with NVIDIA Cuda.

**What is Cuda? :**

CUDA (Compute Unified Device Architecture) is a parallel computing platform and application programming interface (API) model created by Nvidia. It allows software developers and software engineers to use a CUDA-enabled graphics processing unit (GPU) for general purpose processing – an approach termed GPGPU (General-Purpose computing on Graphics Processing Units). The CUDA platform is a software layer that gives direct access to the GPU's virtual instruction set and parallel computational elements, for the execution of compute kernels.

The CUDA platform is designed to work with programming languages such as C, C++, and Fortran. This accessibility makes it easier for specialists in parallel programming to use GPU resources, in contrast to prior APIs like Direct3D and OpenGL, which required advanced skills in graphics programming. CUDA-powered GPUs also support programming frameworks such as OpenACC and OpenCL; and HIP by compiling such code to CUDA. When CUDA was first introduced by Nvidia, the name was an acronym for Compute Unified Device Architecture, but Nvidia subsequently dropped the common use of the acronym. 

We will compile the C / C ++ codes we have written with the code block below (nvcc_plugin).

**Input :**
```linux
!pip install git+git://github.com/andreinechaev/nvcc4jupyter.git
```

**Output :**
```linux
Collecting git+git://github.com/andreinechaev/nvcc4jupyter.git
  Cloning git://github.com/andreinechaev/nvcc4jupyter.git to /tmp/pip-req-build-t79q0z_r
  Running command git clone -q git://github.com/andreinechaev/nvcc4jupyter.git /tmp/pip-req-build-t79q0z_r
Requirement already satisfied (use --upgrade to upgrade): NVCCPlugin==0.0.2 from git+git://github.com/andreinechaev/nvcc4jupyter.git in /usr/local/lib/python3.6/dist-packages
Building wheels for collected packages: NVCCPlugin
  Building wheel for NVCCPlugin (setup.py) ... done
  Created wheel for NVCCPlugin: filename=NVCCPlugin-0.0.2-cp36-none-any.whl size=4307 sha256=ff07f61f515fe94659873643e5fb84142c183868f33c0d98f7286af107a0b292
  Stored in directory: /tmp/pip-ephem-wheel-cache-9slgi9x4/wheels/10/c2/05/ca241da37bff77d60d31a9174f988109c61ba989e4d4650516
Successfully built NVCCPlugin
```

To load an extension while IPython is running, use the %load_ext magic.

**Input :**
```linux
%load_ext nvcc_plugin
```

**Output :**
```linux
created output directory at /content/src
Out bin /content/result.out
```

Now everything is okay, while writing C / C ++ codes, enter the following command at the beginning of the code.

```c
%%cu
...(code)
...(code)
...(code)
```

**Let's make an example application with the C programming language. We will compute the factorial of a number entered.**

**Code :**
```c
%%cu
#include <stdio.h>
#include <stdlib.h>

double fakt(int sayi){
    
	if(sayi>1){
		
		return sayi * fakt(sayi-1);	
	}
	
	else{
		
		return sayi;	
	}
	
}
    
int main(){
	
	int sayi = 6;
	
	printf("\n Number : %d",sayi);
	
	double asd = fakt(sayi);
	
	printf("\n\n factorial = %.2lf",asd);
	
	return 0;	
}
```

**Output :**

```linux
 Number : 6
 factorial = 720.00
```
