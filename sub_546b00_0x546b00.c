// 函数名称: sub_546b00
// 虚拟地址: 0x546b00
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __stdcallsub_546b00(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: void* result = data_307882c
    void* result = data_307882c
    int32_t height = arg4 - arg2
    int32_t width = arg3 - arg1
    
    if (*(result + 0x419c) == arg1 && *(result + 0x41a0) == arg2 && *(result + 0x41a4) == width
            && *(result + 0x41a8) == height)
        return result
    
    *(result + 0x419c) = arg1
    *(result + 0x41a0) = arg2
    *(result + 0x41a4) = width
    *(result + 0x41a8) = height
    return glScissor(arg1, arg2, width, height)
}
