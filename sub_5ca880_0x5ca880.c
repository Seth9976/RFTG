// 函数名称: sub_5ca880
// 虚拟地址: 0x5ca880
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_5ca880(int32_t* arg1, int32_t* arg2, int32_t* arg3)
{
    // 第一条实际指令: void* ecx = data_bed820
    void* ecx = data_bed820
    
    if (ecx == 0)
        return sub_5c8d60() __tailcall
    
    if (arg1 == 0 || *arg1 != ecx + 0xf4)
        sub_5cce60("Invalid window")
        return 0xffffffff
    
    int32_t eax_3 = *(ecx + 0x9c)
    
    if (eax_3 == 0)
        return sub_5c9bb0(arg1, arg2, arg3)
    
    return eax_3(ecx, arg1, arg2, arg3)
}
