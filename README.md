# How to use C/C++ in Azure ML

## Introduction

C/C++ programming languages allow us to develop fast and efficient code for many kind of workloads for financial and IoT scenarios. The goal of this repository is to demonstrate few basic examples about how to execute C/C++ code alone or jointly with Python code using Azure Machine Learning computes.

## Examples

We are working at the following list of example:

Example |Status | Description
--- | --- | ---
[Basic C Job](./examples/basic_c_method_job/) | <span style="color:green">Completed</span> | A very basic job in C. Compilation and execution is happening as a part of the job.
[Basic C Pipeline](./examples/basic_c_method_pipeline/) | <span style="color:green">Completed</span> | A very basic job in C that is a part of a single-step pipeline job.
[Using Data in C Pipeline](./examples/use_data_in_c/) | <span style="color:green">Completed</span> | A C pipeline that demonstrates ability to use data assets in Azure ML as well as inter step pipeline data.
[C Pipeline with Components](./examples/pipeline_with_c_component/) | <span style="color:green">Completed</span> | A pipeline in C with two steps where both steps are components and we suppose to register the first one.
[Using C from Python](./examples/c_from_python_pipeline/) | <span style="color:green">Completed</span> | In this code we demonstrate how to compile C code as a shared library and use it in Python code using `ctypes`.
[C in Parallel Job](./examples/parallel_run_and_c/) | <span style="color:red">In Progress</span> | Parallel job pipeline in Python that uses a custom container with a pre-build C shared library and invoke functions using `ctypes`.
[C in MPI Job](./examples/mpi_and_c/) | <span style="color:red">In Progress</span> | A pipeline in C that uses few processes with abilities to communicate using MPI.
[MLFlow in C Pipeline](./examples/mlflow_in_c/) | <span style="color:red">In Progress</span> | MLFlow logging from C code.
[Using Azure ML REST API in C](./examples/invoke_pipeline_from_c/) | <span style="color:red">In Progress</span> | This code demonstrates how to use C++, Azure SDK for C++ and Azure Ml Rest API to interact with Azure ML.

## How to run examples

To execute the examples from the repository, you need to have an Azure ML workspace and [Azure ML CLI v2 extension should be installed](https://learn.microsoft.com/en-us/azure/machine-learning/how-to-configure-cli).

All jobs/pipelines are using a single-node cluster with `mycpucluster` name.

Every example associated folder contains `start.sh` to start the example. To make the script is working with no parameters we removed parameters like `workspace-name` and `resourcegroup-name`. To set these parameters and make them common, we would recommend to execute the following command:

`az config set defaults.group=<your resource group name> defaults.workspace=<Your workspace name>`
