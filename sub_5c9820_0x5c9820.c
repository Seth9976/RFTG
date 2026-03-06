// 函数名称: sub_5c9820
// 虚拟地址: 0x5c9820
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char*sub_5c9820(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: void* eax = data_bed820
    void* eax = data_bed820
    
    if (eax == 0)
        return sub_5c8d60() __tailcall
    
    if (arg1 != 0)
        char* result = eax + 0xf4
        
        if (*arg1 == result)
            if (arg2 != 0)
                sub_5d65d0(arg1[3])
                result = sub_5d6dc0(arg2, 0x16362004, 0)
                arg1[3] = result
                
                if (result != 0)
                    void* edx_2 = data_bed820
                    int32_t ecx_2 = *(edx_2 + 0x24)
                    
                    if (ecx_2 != 0)
                        return ecx_2(edx_2, arg1, result)
            
            return result
    
    sub_5cce60("Invalid window")
    return 0xffffffff
}
