// 函数名称: sub_601f90
// 虚拟地址: 0x601f90
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __stdcallsub_601f90(void* arg1)
{
    // 第一条实际指令: int32_t temp1 = *(arg1 + 4)
    int32_t temp1 = *(arg1 + 4)
    *(arg1 + 4) -= 1
    
    if (temp1 != 1)
        return *(arg1 + 4)
    
    void* var_8_1 = arg1
    sub_5d0af0()
    return 0
}
