// 函数名称: sub_464be0
// 虚拟地址: 0x464be0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_464be0(int32_t arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t eax_1 = (arg1 - arg3) s>> 2
    int32_t eax_1 = (arg1 - arg3) s>> 2
    int32_t eax_2
    int32_t edx
    edx:eax_2 = sx.q(eax_1)
    int32_t result = eax_2 - edx
    int32_t esi_1 = result s>> 1
    
    if (esi_1 s> 0)
        int32_t i_2 = esi_1 * 2 + 2
        
        while (true)
            int32_t edx_1 = *(arg3 + (esi_1 << 2) - 4)
            esi_1 -= 1
            int32_t i = i_2 - 2
            int32_t i_1 = i
            int32_t edi_1 = esi_1
            
            for (; i s< eax_1; i = i * 2 + 2)
                if (*(arg3 + (i << 2)) s< *(arg3 + (i << 2) - 4))
                    i -= 1
                
                *(arg3 + (edi_1 << 2)) = *(arg3 + (i << 2))
                edi_1 = i
            
            if (i == eax_1)
                *(arg3 + (edi_1 << 2)) = *(arg3 + (eax_1 << 2) - 4)
                edi_1 = eax_1 - 1
            
            int32_t eax_5
            int32_t edx_3
            edx_3:eax_5 = sx.q(edi_1 - 1)
            result = (eax_5 - edx_3) s>> 1
            
            while (esi_1 s< edi_1)
                int32_t edx_4 = *(arg3 + (result << 2))
                
                if (edx_4 s>= edx_1)
                    break
                
                *(arg3 + (edi_1 << 2)) = edx_4
                edi_1 = result
                int32_t eax_8
                int32_t edx_5
                edx_5:eax_8 = sx.q(result - 1)
                result = (eax_8 - edx_5) s>> 1
            
            *(arg3 + (edi_1 << 2)) = edx_1
            
            if (esi_1 s<= 0)
                break
            
            i_2 = i_1
    
    return result
}
