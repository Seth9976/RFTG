// 函数名称: sub_5cb1b0
// 虚拟地址: 0x5cb1b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5cb1b0(int32_t* arg1)
{
    // 第一条实际指令: int32_t eax = data_bed820
    int32_t eax = data_bed820
    
    if (eax == 0)
        return sub_5c8d60() __tailcall
    
    if (arg1 != 0)
        int32_t result = eax + 0xf4
        
        if (*arg1 == result)
            if ((arg1[0xc].b & 4) == 0)
                return result
            
            sub_5cb050(arg1, 0)
            void* ecx_1 = data_bed820
            int32_t eax_2 = *(ecx_1 + 0x3c)
            
            if (eax_2 != 0)
                eax_2(ecx_1, arg1)
            
            return sub_5d6e90(arg1, 2, 0, 0)
    
    return sub_5cce60("Invalid window")
}
