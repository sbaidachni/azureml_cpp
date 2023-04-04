#include <stdlib.h>
#include <stdio.h>

int main (int argc, char *argv[])
{
    const char* mlflow_tracking = getenv("MLFLOW_TRACKING_URI");
    printf("MLFLOW_TRACKING_URI: %s\n", mlflow_tracking);

    const char* mlflow_run = getenv("MLFLOW_RUN_ID");
    printf("MLFLOW_RUN_ID: %s\n", mlflow_run);
}