#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
    const char* mlflow_tracking = getenv("MLFLOW_TRACKING_URI");
    printf("MLFLOW_TRACKING_URI: %s\n", mlflow_tracking);

    const char* mlflow_run = getenv("MLFLOW_RUN_ID");
    printf("MLFLOW_RUN_ID: %s\n", mlflow_run);

    const char* master_addr = getenv("MASTER_ADDR");
    printf("MASTER_ADDR: %s\n", master_addr);

    const char* master_port = getenv("MASTER_PORT");
    printf("MASTER_PORT: %s\n", master_port);

    const char* rank = getenv("RANK");
    printf("RANK: %s\n", rank);

    const char* local_rank = getenv("LOCAL_RANK");
    printf("LOCAL_RANK: %s\n", local_rank);

    const char* node_rank = getenv("NODE_RANK");
    printf("NODE_RANK: %s\n", node_rank);

    return 0;
}