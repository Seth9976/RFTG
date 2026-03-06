// 函数名称: sub_501f80
// 虚拟地址: 0x501f80
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_501f80(int32_t* arg1, int32_t* arg2, void* arg3, char arg4)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_c = ecx
    
    if (arg4 == 0)
        sub_4fe7d0(arg1, arg2)
    
    if (arg3 == 0)
        return 
    
    *(arg3 + 0x10) = arg2
    int32_t eax_1 = arg2[5]
    
    if (eax_1 != 0 && eax_1(arg3) == 0)
        int32_t var_1c_3 = *arg2
        sub_4c5680("Difficult versioning function failed on '%s'")
        return 
    
    sub_501e60(arg1, arg2, arg3)
}
