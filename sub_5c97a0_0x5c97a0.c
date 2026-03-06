// 函数名称: sub_5c97a0
// 虚拟地址: 0x5c97a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5c97a0(int32_t* arg1, char* arg2)
{
    // 第一条实际指令: int32_t eax = data_bed820
    int32_t eax = data_bed820
    
    if (eax == 0)
        return sub_5c8d60() __tailcall
    
    if (arg1 == 0 || *arg1 != eax + 0xf4)
        sub_5cce60("Invalid window")
        return 0xffffffff
    
    int32_t result = arg1[2]
    
    if (arg2 != result)
        int32_t result_1 = result
        sub_5d0af0()
        
        if (arg2 == 0 || *arg2 == 0)
            arg1[2] = 0
        else
            arg1[2] = sub_5cd390(arg2)
        
        void* ecx_2 = data_bed820
        result = *(ecx_2 + 0x20)
        
        if (result != 0)
            return result(ecx_2, arg1)
    
    return result
}
