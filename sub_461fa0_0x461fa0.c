// 函数名称: sub_461fa0
// 虚拟地址: 0x461fa0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_461fa0()
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_6998fe
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_26c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t esi = data_27c05dc
    sub_4db310()
    sub_42cde0()
    int16_t top = 0xffff
    int32_t var_18 = 0
    
    if (esi s> 0)
        void* edi_1 = &data_bf80d4
        void* var_14_1 = &data_bf80d4
        int32_t eax_21
        
        do
            int32_t eax_3 = *(edi_1 - 4)
            
            if (eax_3 u> 9)
                sub_4c5870("Halt", &data_83f3d3, "..\code\RFTGClient.cpp", 0x66c5, "RFTGClientDraw")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            switch (eax_3)
                case 0
                    int32_t ecx_1 = *(edi_1 + 4)
                    
                    if (ecx_1 != *(data_27e7a40 + 0x74))
                        sub_45f5f0(ecx_1)
                case 1
                    sub_4609e0(*edi_1)
                case 2
                    sub_4616e0(*edi_1)
                case 3
                    sub_42c100()
                case 4
                    sub_44b970()
                case 5
                    void* ebx_1 = *(data_27e7a40 + 0x548)
                    
                    if (*(ebx_1 + 0x2c0b0) != 0)
                        sub_424f90(*(ebx_1 + 0xb0))
                        
                        if ((data_3166e84 & 1) == 0)
                            data_3166e84.d |= 1
                            int32_t var_8_1 = 0
                            data_3166e80 = sub_4f5220(data_307c530, "tblSpecificMilitary")
                            int32_t var_8_2 = 0xffffffff
                        
                        void var_1dc
                        int32_t eax_7 = sub_40a930(&var_1dc)
                        unimplemented  {call 0x40a930}
                        unimplemented  {fld1 }
                        int32_t edx_2 = data_3166e80
                        int32_t* eax_8 = data_307c530
                        void var_19c
                        int32_t var_278_1 = __builtin_memcpy(&var_19c, eax_7, 0x40)
                        float var_278_2 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                        unimplemented  {fstp dword [esp], st0}
                        void var_21c
                        int32_t eax_9 = sub_4f66d0(&var_21c, eax_8, edx_2, &data_84074c, var_278_2, 
                            nullptr, nullptr)
                        unimplemented  {call 0x4f66d0}
                        unimplemented  {fld1 }
                        float var_270_3 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                        unimplemented  {fstp dword [esp], st0}
                        top -= 2
                        void* eax_10 = *(ebx_1 + 0xb0)
                        void var_11c
                        __builtin_memcpy(&var_11c, eax_9, 0x40)
                        sub_4f9fe0(eax_10, &var_11c)
                        edi_1 = var_14_1
                case 6
                    sub_42b950()
                    top -= 1
                    unimplemented  {call 0x42b950}
                case 7
                    void* ebx_2 = *(data_27e7a40 + 0x548)
                    void var_15c
                    int32_t eax_11 = sub_40a930(&var_15c)
                    unimplemented  {call 0x40a930}
                    unimplemented  {fld1 }
                    float var_270_5 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                    unimplemented  {fstp dword [esp], st0}
                    void var_5c
                    __builtin_memcpy(&var_5c, eax_11, 0x40)
                    sub_4f9fe0(*(ebx_2 + 0x54), &var_5c)
                    void* ebx_3 = *(data_27e7a40 + 0x548)
                    int32_t eax_12 = sub_40a930(&var_15c)
                    unimplemented  {call 0x40a930}
                    unimplemented  {fld1 }
                    void* edx_4 = *(ebx_3 + 0xb4)
                    float var_270_7 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                    unimplemented  {fstp dword [esp], st0}
                    void var_dc
                    __builtin_memcpy(&var_dc, eax_12, 0x40)
                    sub_4f9fe0(edx_4, &var_dc)
                    void* ebx_4 = *(data_27e7a40 + 0x548)
                    void var_25c
                    int32_t eax_14 = sub_40a930(&var_25c)
                    unimplemented  {call 0x40a930}
                    unimplemented  {fld1 }
                    void* eax_15 = *(ebx_4 + 0xb8)
                    float var_270_9 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                    unimplemented  {fstp dword [esp], st0}
                    top -= 3
                    void var_9c
                    __builtin_memcpy(&var_9c, eax_14, 0x40)
                    sub_4f9fe0(eax_15, &var_9c)
                    edi_1 = var_14_1
                case 8
                    void* eax_18 = *(data_27e7a40 + 0x548)
                    int32_t esi_7 = *(eax_18 + 0xbfac)
                    int32_t* eax_19
                    
                    if (esi_7 != 0)
                        eax_19.b = *sub_463f60(eax_18 + 0x43960, esi_7) == 4
                    
                    if (esi_7 == 0 || eax_19.b == 0)
                        sub_4576c0()
                case 9
                    sub_44ef10()
                    void* eax_16 = *(data_27e7a40 + 0x548)
                    int32_t esi_6 = *(eax_16 + 0xbfac)
                    
                    if (esi_6 != 0)
                        int32_t* eax_17
                        eax_17.b = *sub_463f60(eax_16 + 0x43960, esi_6) == 4
                        
                        if (eax_17.b != 0)
                            sub_4576c0()
            
            eax_21 = var_18 + 1
            edi_1 += 0x14
            var_18 = eax_21
            var_14_1 = edi_1
        while (eax_21 s< esi)
    
    sub_45f050()
    void* result = data_27e7fe4
    __builtin_memcpy(result + 0x9c, 0x83faf8, 0x40)
    *(result + 0xdc) = 0
    
    if (data_3078599 == 0)
        sub_4c5870("gDraw3DData.submittingRenderItems", &data_83f3d3, "Draw3d.cpp", 0xab3, 
            "Draw3DQuadGroupEnd")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    if (data_3078598 != 0)
        data_3078598 = 0
        data_30785b4 = 0
        fsbase->NtTib.ExceptionList = ExceptionList
        return result
    
    sub_4c5870("gDraw3DData.quadGroupDrawing", &data_83f3d3, "Draw3d.cpp", 0xab4, "Draw3DQuadGroupEnd")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
