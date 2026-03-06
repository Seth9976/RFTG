// 函数名称: sub_519590
// 虚拟地址: 0x519590
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_519590(int32_t arg1 @ edi, int32_t arg2)
{
    // 第一条实际指令: int32_t result
    int32_t result
    
    if (arg1 == 0)
        result.b = 0
        return result
    
    int32_t esi = 1
    
    if (arg2 s> 1)
        while (true)
            int16_t* eax = *(arg1 + (esi << 2))
            int16_t* entry_ebx
            int16_t* ecx_1 = entry_ebx
            
            while (true)
                int16_t edx = *eax
                int16_t temp0_1 = *ecx_1
                bool c_1 = edx u< temp0_1
                
                if (edx == temp0_1)
                    if (edx == 0)
                        result = 0
                        break
                    
                    edx = eax[1]
                    int16_t temp3_1 = ecx_1[1]
                    c_1 = edx u< temp3_1
                    
                    if (edx == temp3_1)
                        eax = &eax[2]
                        ecx_1 = &ecx_1[2]
                        
                        if (edx != 0)
                            continue
                        
                        result = 0
                        break
                
                bool c_2 = unimplemented  {sbb eax, eax}
                result = sbb.d(sbb.d(eax, eax, c_1), 0xffffffff, c_2)
                break
            
            if (result == 0)
                result.b = 1
                return result
            
            esi += 1
            
            if (esi s>= arg2)
                break
    
    result.b = 0
    return result
}
