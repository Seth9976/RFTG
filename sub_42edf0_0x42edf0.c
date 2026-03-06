// 函数名称: sub_42edf0
// 虚拟地址: 0x42edf0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_42edf0()
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_690bc8
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_28 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* result = data_27e7a40
    int32_t* esi = *(result + 0x548)
    
    if (esi != 0)
        int32_t eax_3 = *esi
        
        if (eax_3 != 0)
            sub_4f7100(eax_3)
        
        void* edi_1 = &esi[5]
        int32_t i_5 = 0xc
        int32_t i
        
        do
            int32_t eax_4 = *edi_1
            
            if (eax_4 != 0)
                sub_4f7100(eax_4)
            
            edi_1 += 4
            i = i_5
            i_5 -= 1
        while (i != 1)
        int32_t eax_5 = esi[1]
        
        if (eax_5 != 0)
            sub_4f7100(eax_5)
        
        int32_t eax_6 = esi[2]
        
        if (eax_6 != 0)
            sub_4f7100(eax_6)
        
        int32_t eax_7 = esi[3]
        
        if (eax_7 != 0)
            sub_4f7100(eax_7)
        
        int32_t eax_8 = esi[4]
        
        if (eax_8 != 0)
            sub_4f7100(eax_8)
        
        int32_t eax_9 = esi[0x15]
        
        if (eax_9 != 0)
            sub_4f7100(eax_9)
        
        int32_t eax_10 = esi[0x2d]
        
        if (eax_10 != 0)
            sub_4f7100(eax_10)
        
        int32_t eax_11 = esi[0x2e]
        
        if (eax_11 != 0)
            sub_4f7100(eax_11)
        
        int32_t eax_12 = esi[0x2f]
        
        if (eax_12 != 0)
            sub_4f7100(eax_12)
        
        int32_t eax_13 = esi[0x17]
        
        if (eax_13 != 0)
            sub_4f7100(eax_13)
        
        int32_t eax_14 = esi[0x18]
        
        if (eax_14 != 0)
            sub_4f7100(eax_14)
        
        int32_t eax_15 = esi[0x2c]
        
        if (eax_15 != 0)
            sub_4f7100(eax_15)
        
        int32_t eax_16 = esi[0x16]
        
        if (eax_16 != 0)
            sub_4f7100(eax_16)
        
        void* esi_1 = &esi[0x19]
        int32_t i_6 = 0x13
        int32_t i_1
        
        do
            int32_t eax_17 = *esi_1
            
            if (eax_17 != 0)
                sub_4f7100(eax_17)
            
            esi_1 += 4
            i_1 = i_6
            i_6 -= 1
        while (i_1 != 1)
        void** edi_2 = data_27e7a40
        void* eax_18 = edi_2[0x152]
        
        if (eax_18 != 0)
            if (*(eax_18 + 0x45848) != 0)
                sub_406d90(eax_18 + 0x45848)
                edi_2 = data_27e7a40
            
            for (int32_t i_2 = 0; i_2 s< 0x438; i_2 += 0xb4)
                int32_t eax_19 = *(i_2 + edi_2[0x152] + 0x43a3c)
                
                if (eax_19 != 0)
                    _aligned_free_base(eax_19)
            
            void* esi_3 = edi_2[0x152]
            
            if (*(esi_3 + 0x43960) != 0)
                sub_463d80(esi_3 + 0x43960)
                int32_t eax_21 = *(esi_3 + 0x43960)
                
                if (eax_21 != 0)
                    _aligned_free_base(eax_21)
                
                __builtin_memset(esi_3 + 0x43960, 0, 0x14)
                *(esi_3 + 0x43978) = 0
            
            edi_2 = edi_2[0x152]
            
            if (edi_2 != 0)
                if (edi_2[0x10e58] != 0)
                    sub_463d80(&edi_2[0x10e58])
                    int32_t eax_23 = edi_2[0x10e58]
                    
                    if (eax_23 != 0)
                        _aligned_free_base(eax_23)
                    
                    __builtin_memset(&edi_2[0x10e58], 0, 0x14)
                    edi_2[0x10e5e] = 0
                
                int32_t var_8_1 = 0xffffffff
                sub_5a71d9(&edi_2[0xb030], 0x1c0, 0xc8, sub_41e610)
                void* esi_4 = data_26a44e4
                edi_2 = *(data_27e7a40 + 0x548)
                
                if (esi_4 == 0)
                    sub_4f4250()
                    esi_4 = data_26a44e4
                
                int32_t eax_24 = 0
                void** esi_5
                
                while (true)
                    if (1 << (eax_24.b + 4) s>= 0x45850)
                        esi_5 = esi_4 + eax_24 * 0x14
                        break
                    
                    eax_24 += 1
                    
                    if (eax_24 s>= 7)
                        esi_5 = esi_4 + 0x8c
                        break
                
                int32_t ecx_3 = esi_5[4]
                esi_5[3] -= 1
                
                if (ecx_3 != 0xffffffff)
                    int32_t eax_27 = esi_5[2] * ecx_3
                    int32_t* ecx_4 = esi_5[1]
                    int32_t var_14_1 = eax_27
                    
                    if (ecx_4 == 0)
                    label_42f122:
                        sub_4c5870("IsPointerFromAllocator(pItem)", &data_83f3d3, 
                            "c:\ax2010\engine\xAlloc.h", 0x81, "XAllocator::Free")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    while (true)
                        void* edx_3 = &ecx_4[1]
                        ecx_4 = *ecx_4
                        
                        if (edi_2 u>= edx_3 && edi_2 u< edx_3 + eax_27)
                            esi_5[4]
                            
                            if (mods.dp.d(sx.q(edi_2 - edx_3), esi_5[4]) == 0)
                                *edi_2 = *esi_5
                                *esi_5 = edi_2
                                break
                            
                            eax_27 = var_14_1
                        
                        if (ecx_4 == 0)
                            goto label_42f122
                else if (edi_2 != 0)
                    _aligned_free_base(edi_2)
                
                *(data_27e7a40 + 0x548) = 0
        
        sub_4b3fd0(&data_2691c30)
        sub_4b3fd0(&data_2691bc0)
        void* i_4 = data_27e7a88
        
        if (i_4 != 0)
            void* i_3
            
            do
                i_3 = *(i_4 + 0x60000)
                _aligned_free_base(i_4)
                i_4 = i_3
            while (i_3 != 0)
            data_27e7a88 = i_4
        
        result = data_27e7a94
        
        if (result != 0)
            result = _aligned_free_base(result)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
