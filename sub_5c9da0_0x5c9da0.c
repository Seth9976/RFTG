// 函数名称: sub_5c9da0
// 虚拟地址: 0x5c9da0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5c9da0(int32_t* arg1)
{
    // 第一条实际指令: int32_t eax = data_bed820
    int32_t eax = data_bed820
    
    if (eax == 0)
        return sub_5c8d60() __tailcall
    
    if (arg1 != 0)
        int32_t result = eax + 0xf4
        
        if (*arg1 == result)
            if ((arg1[0xc].b & 0x40) == 0)
                sub_5cb050(arg1, 0)
                void* ecx_2 = data_bed820
                result = *(ecx_2 + 0x48)
                
                if (result != 0)
                    return result(ecx_2, arg1)
            
            return result
    
    return sub_5cce60("Invalid window")
}
