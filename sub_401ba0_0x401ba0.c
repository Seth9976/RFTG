// 函数名称: sub_401ba0
// 虚拟地址: 0x401ba0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_401ba0(int32_t* arg1 @ esi)
{
    // 第一条实际指令: int32_t eax = 0
    int32_t eax = 0
    int32_t result
    
    if (arg1[1] u<= 0)
    label_401bc9:
        result = 0
    else
        void* ecx_1 = *arg1
        
        while ((*(ecx_1 + 0x318b08) & 0xffff0000) == 0)
            eax += 1
            ecx_1 += 0x318b10
            
            if (eax u>= arg1[1])
                goto label_401bc9
        
        result = *(ecx_1 + 0x318b08)
    
    if (result != 0)
        while (true)
            int32_t ebx_1 = *arg1
            int32_t eax_1 = result & 0xffff
            int32_t eax_2 = eax_1 + 1
            void* edi_3 = eax_1 * 0x318b10 + ebx_1
            int32_t result_1
            
            if (eax_2 u>= arg1[1])
            label_401c2c:
                result_1 = 0
            else
                void* ecx_4 = eax_2 * 0x318b10 + ebx_1
                
                while ((*(ecx_4 + 0x318b08) & 0xffff0000) == 0)
                    eax_2 += 1
                    ecx_4 += 0x318b10
                    
                    if (eax_2 u>= arg1[1])
                        goto label_401c2c
                
                result_1 = *(ecx_4 + 0x318b08)
            
            if (*(edi_3 + 0x554) != 0)
                sub_401cc0(edi_3 + 0x554)
                int32_t ecx_6 = *(edi_3 + 0x554)
                
                if (ecx_6 != 0)
                    _aligned_free_base(ecx_6)
                
                __builtin_memset(edi_3 + 0x554, 0, 0x14)
                *(edi_3 + 0x56c) = 0
            
            result = arg1[3]
            arg1[3] = zx.d(*(edi_3 + 0x318b08))
            *(edi_3 + 0x318b08) = result
            arg1[4] -= 1
            
            if (result_1 == 0)
                break
            
            result = result_1
    
    arg1[3] = 0
    arg1[1] = 0
    return result
}
