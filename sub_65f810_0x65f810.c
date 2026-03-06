// 函数名称: sub_65f810
// 虚拟地址: 0x65f810
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_65f810(void* arg1, int32_t arg2)
{
    // 第一条实际指令: if (*(arg1 + 0x58) s< 2)
    if (*(arg1 + 0x58) s< 2)
        return 0xffffff7d
    
    int32_t result = 0
    
    if (*(arg1 + 4) != 0)
        int32_t ecx_1 = *(arg1 + 0x34)
        
        if (arg2 s< ecx_1)
            if (arg2 s>= 0)
                int32_t edi_1 = *(arg1 + 0x44)
                int32_t eax_5 = arg2 << 4
                *(edi_1 + eax_5 + 0xc)
                return *(edi_1 + eax_5 + 8)
            
            int32_t i = 0
            int32_t var_8 = 0
            
            if (ecx_1 s> 0)
                do
                    int32_t eax_3
                    int32_t edx_2
                    eax_3, edx_2 = sub_65f810(arg1, i)
                    int32_t result_1 = result
                    result += eax_3
                    var_8 = adc.d(var_8, edx_2, result_1 + eax_3 u< result_1)
                    i += 1
                while (i s< *(arg1 + 0x34))
            
            return result
    
    return 0xffffff7d
}
