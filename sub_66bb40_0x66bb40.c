// 函数名称: sub_66bb40
// 虚拟地址: 0x66bb40
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_66bb40(void* arg1, void* arg2, void* arg3)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    void* result = arg1
    uint32_t ecx = zx.d(*(result + 8))
    void* result_1 = arg2
    
    if (ecx != 3)
        uint32_t edx_1 = zx.d(*(result + 9))
        result = arg3
        int32_t var_1c_1
        uint32_t var_18
        int32_t edi_4
        
        if ((ecx.b & 2) == 0)
            var_1c_1 = 1
            edi_4 = 1
            var_18 = edx_1 - zx.d(*(result + 3))
        else
            uint32_t edi_2 = zx.d(*(result + 1))
            var_18 = edx_1 - zx.d(*result)
            uint32_t var_14_1 = edx_1 - edi_2
            edi_4 = 3
            uint32_t var_10_1 = edx_1 - zx.d(*(result + 2))
            var_1c_1 = 3
        
        if ((ecx.b & 4) != 0)
            result = zx.d(*(result + 4))
            (&var_18)[edi_4] = edx_1 - result
            edi_4 += 1
            var_1c_1 = edi_4
        
        int32_t ebx_8 = 0
        int32_t ecx_3 = 0
        
        if (edi_4 s> 0)
            do
                result = (&var_18)[ecx_3]
                
                if (result s<= 0 || result s>= edx_1)
                    (&var_18)[ecx_3] = 0
                else
                    ebx_8 = 1
                
                ecx_3 += 1
            while (ecx_3 s< edi_4)
            
            if (ebx_8 != 0)
                result = edx_1 - 2
                
                switch (result)
                    case nullptr
                        result = *(arg1 + 4) + result_1
                        
                        if (result_1 u< result)
                            do
                                ecx_3.b = *result_1
                                ecx_3.b u>>= 1
                                ecx_3.b &= 0x55
                                *result_1 = ecx_3.b
                                result_1 += 1
                            while (result_1 u< result)
                            
                            sub_5a6aba(eax_1 ^ &__saved_ebp)
                            return result
                    case 2
                        int32_t edx_4 = 0xf s>> var_18.b
                        void* edi_7 = *(arg1 + 4) + result_1
                        result = result_1
                        
                        if (result_1 u< edi_7)
                            do
                                ebx_8.b = *result
                                ebx_8.b u>>= var_18.b
                                result += 1
                                ebx_8.b &= edx_4.b | (edx_4 << 4).b
                                *(result - 1) = ebx_8.b
                            while (result u< edi_7)
                            
                            sub_5a6aba(eax_1 ^ &__saved_ebp)
                            return result
                    case 6
                        void* ebx_10 = *(arg1 + 4) + result_1
                        int32_t edi_8 = 0
                        result = result_1
                        
                        if (result_1 u< ebx_10)
                            do
                                ecx_3.b = (&var_18)[edi_8].b
                                edi_8 += 1
                                
                                if (edi_8 s>= var_1c_1)
                                    edi_8 = 0
                                
                                *result = (zx.d(*result) u>> ecx_3.b).b
                                result += 1
                            while (result u< ebx_10)
                            
                            sub_5a6aba(eax_1 ^ &__saved_ebp)
                            return result
                    case 0xe
                        void* ebx_12 = *(arg1 + 4) + result_1
                        int32_t edi_9 = 0
                        result = result_1
                        
                        if (result_1 u< ebx_12)
                            do
                                char ecx_15 = ((&var_18)[edi_9]).b
                                edi_9 += 1
                                int32_t edx_12 = ((zx.d(*result) << 8) + zx.d(*(result + 1))) s>> ecx_15
                                
                                if (edi_9 s>= var_1c_1)
                                    edi_9 = 0
                                
                                *result = (edx_12 s>> 8).b
                                *(result + 1) = edx_12.b
                                result += 2
                            while (result u< ebx_12)
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}
