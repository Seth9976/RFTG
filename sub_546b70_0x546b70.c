// 函数名称: sub_546b70
// 虚拟地址: 0x546b70
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __stdcallsub_546b70(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: void* result = data_307882c
    void* result = data_307882c
    int32_t height = arg4 - arg2
    int32_t width = arg3 - arg1
    
    if (*(result + 0x418c) == arg1 && *(result + 0x4190) == arg2 && *(result + 0x4194) == width
            && *(result + 0x4198) == height)
        return result
    
    *(result + 0x418c) = arg1
    *(result + 0x4190) = arg2
    *(result + 0x4194) = width
    *(result + 0x4198) = height
    return glViewport(arg1, arg2, width, height)
}
