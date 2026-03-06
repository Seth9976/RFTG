// 函数名称: sub_45f050
// 虚拟地址: 0x45f050
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_45f050()
{
    // 第一条实际指令: int32_t var_c = 0xffffffff
    int32_t var_c = 0xffffffff
    int32_t (* var_10)(void* arg1) = sub_6998b9
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    void var_65c
    int32_t eax_2 = __security_cookie ^ &var_65c
    int32_t __saved_edi
    int32_t var_66c = __security_cookie ^ &__saved_edi
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* ebx = *(data_27e7a40 + 0x548)
    void var_580
    int32_t eax_6
    int80_t st0
    st0, eax_6 = sub_40a930(&var_580)
    void var_640
    __builtin_memcpy(&var_640, eax_6, 0x40)
    sub_459c30()
    int32_t ecx = *(ebx + 0xbfac)
    
    if (ecx != 0)
        data_315fd48 = ecx
    
    void* edx_1 = *(data_27e7a40 + 0x548)
    
    if (ecx != 0)
        uint32_t eax_7 = zx.d(ecx.w)
        
        if (eax_7 u< *(edx_1 + 0x43964))
            int32_t* eax_9 = eax_7 * 0xb0 + *(edx_1 + 0x43960)
            
            if (eax_9[0x2b] == ecx)
                float var_64c
                __builtin_memcpy(&var_580, sub_454940(eax_9, &var_64c), 0x40)
                int32_t eax_11
                int32_t ecx_2
                eax_11, ecx_2 = sub_459b60()
                
                if (eax_11 != 0)
                    int32_t var_674_2 = ecx_2
                    ecx_2 = sub_5055d0(ebx + 0xc8, *(ebx + 0xc4), ebx + 0xd0, *(ebx + 0xc0), &var_580, 
                        fconvert.s(fconvert.t(fconvert.s(fconvert.t(*(ebx + 0xbfcc))))), eax_11)
                
                int32_t* var_680
                
                if (sub_448b40(ecx_2, eax_9) != 0)
                    int32_t var_670_3 = ecx_2
                    sub_4f5f30(data_307c110, &var_580, 8, fconvert.s(fconvert.t(*(ebx + 0xbfcc))))
                    int16_t top_1 = 0xfffd
                    void* esi_2 = ebx + 0xe7
                    int32_t i_2 = 5
                    int32_t ecx_4
                    int32_t i
                    
                    do
                        unimplemented  {fld st0, dword [edi+0xbfcc]}
                        ecx_4 = *(esi_2 - 7)
                        float var_658_2 = fconvert.s(unimplemented  {fstp dword [esp+0x14], st0})
                        unimplemented  {fstp dword [esp+0x14], st0}
                        
                        if (*(esi_2 - 2) == 0)
                            float eax_15
                            
                            if (*esi_2 != 0 || *(esi_2 + 1) != 0)
                                eax_15 = 4.20389539e-45f
                            else
                                char eax_14 = *(esi_2 + 6)
                                
                                if (eax_14 == 0)
                                    eax_15 = 0f
                                else if (*(esi_2 + 8) != 0 && *(esi_2 + 9) != 0)
                                    eax_15 = 2.80259693e-45f
                                else if (eax_14 == 0 || *(esi_2 + 8) != 0)
                                    eax_15 = 0f
                                else
                                    eax_15 = 1.40129846e-45f
                            
                            unimplemented  {fld st0, dword [esp+0x14]}
                            int32_t var_670_5 = 0
                            int32_t var_674_5 = ecx_4
                            float var_674_6 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                            unimplemented  {fstp dword [esp], st0}
                            var_680 = *(esi_2 - 0xb)
                            ecx_4 = sub_4f6100(var_680, ecx_4, eax_15, var_674_6)
                            top_1 -= 1
                            unimplemented  {call 0x4f6100}
                        
                        esi_2 += 0x1c
                        i = i_2
                        i_2 -= 1
                    while (i != 1)
                    unimplemented  {fld st0, dword [edi+0xbfcc]}
                    int32_t var_670_6 = ecx_4
                    float var_670_7 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                    unimplemented  {fstp dword [esp], st0}
                    sub_4f5f30(data_307c110, &var_580, 1, var_670_7)
                    unimplemented  {call 0x4f5f30}
                
                char eax_18
                int32_t ecx_5
                eax_18, ecx_5 = sub_448aa0(eax_9)
                
                if (eax_18 != 0)
                    unimplemented  {fld st0, dword [edi+0xbfcc]}
                    int32_t var_674_8 = ecx_5
                    float var_658_3 = fconvert.s(unimplemented  {fstp dword [esp+0x1c], st0})
                    unimplemented  {fstp dword [esp+0x1c], st0}
                    unimplemented  {fld st0, dword [esp+0x1c]}
                    float var_674_9 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                    unimplemented  {fstp dword [esp], st0}
                    int32_t ecx_7 = sub_5055d0(ebx + 0x170, *(ebx + 0x16c), ebx + 0x178, 
                        *(ebx + 0x168), &var_580, var_674_9, 0)
                    
                    if ((data_3166a78 & 1) == 0)
                        data_3166a78.d |= 1
                        int32_t var_c_1 = 0
                        data_3166a74 = sub_4f5220(data_307c110, "txtCards")
                        int32_t var_c_2 = 0xffffffff
                    
                    unimplemented  {fld st0, dword [edi+0xbfcc]}
                    int32_t var_670_10 = ecx_7
                    float var_670_11 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                    unimplemented  {fstp dword [esp], st0}
                    sub_4f5f30(data_307c110, &var_580, 0x10, var_670_11)
                    unimplemented  {call 0x4f5f30}
                    void* ecx_8 = data_27e7a40
                    void* eax_22 = *(ecx_8 + 0x548)
                    
                    if (eax_22 == 0)
                        char const* const var_670_12 = "GetGame"
                        int32_t var_674_12 = 0xcc
                        char const* const var_678_7 = "..\code\RFTGClient.cpp"
                        char* const var_67c_7 = &data_83f3d3
                        var_680 = "gCClient->rftgClientData"
                        sub_4c5870(var_680, var_67c_7, var_678_7, var_674_12, var_670_12)
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    int32_t edx_9 = *(eax_22 + 0x45844)
                    int32_t i_1 = sx.d(*(*(ecx_8 + 0x74) * 0xb4 + edx_9 + 0x4a))
                    int32_t eax_24 = 0
                    
                    while (i_1 != 0xffffffff)
                        i_1 = sx.d(*(edx_9 + ((i_1 * 5 + 0x11d) << 2)))
                        eax_24 += 1
                    
                    char* var_648
                    char** eax_25
                    int32_t edx_10
                    eax_25, edx_10 = sub_4c4ab0(&var_648)
                    int32_t var_c_3 = 1
                    char* eax_26 = *eax_25
                    char* var_654_2 = &data_83f3d3
                    
                    if (eax_26 != 0)
                        var_654_2 = eax_26
                    
                    unimplemented  {fld st0, dword [edi+0xbfcc]}
                    int32_t* ecx_12 = data_307c110
                    float eax_27 = data_3166a74
                    float var_658_4 = fconvert.s(unimplemented  {fstp dword [esp+0x14], st0})
                    unimplemented  {fstp dword [esp+0x14], st0}
                    unimplemented  {fld st0, dword [esp+0x14]}
                    void* var_670_13 = &var_580
                    int32_t* var_674_13 = ecx_12
                    float var_674_14 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                    unimplemented  {fstp dword [esp], st0}
                    var_64c = eax_27
                    __builtin_memcpy(&var_580, sub_4f62d0(eax_27, var_674_14, edx_10), 0x40)
                    int32_t eax_29 = sub_4f4890(ecx_12)
                    sub_4f5010(&var_580, var_64c i* 0x118 + *eax_29, var_654_2, 0)
                    int32_t var_c_4 = 0xffffffff
                    char* eax_31 = var_648
                    
                    if (eax_31 != 0 && *eax_31 != 0)
                        void* eax_33 = sub_4c4060(&var_648)
                        int32_t temp1_1 = *(eax_33 + 4)
                        *(eax_33 + 4) -= 1
                        
                        if (temp1_1 == 1)
                            int32_t esi_8 = *(eax_33 + 0xc) + 0x10
                            sub_4f4430(eax_33, sub_4f4380(esi_8), esi_8)
    
    if (*(data_27e7a40 + 0x2c4960) == 1 && data_27c0720 == 1)
        int32_t ecx_14 = data_27c076c
        int32_t eax_37 = *(data_27e7a54 + 0x204) * 3
        
        if (ecx_14 s< *((eax_37 << 3) + &data_8c77ec) - 1
                && *((&data_8c77e8)[eax_37 * 2] + (ecx_14 << 3)) == 0x48)
            sub_44b970()
    
    sub_45af30(*(ebx + 0xc))
    sub_45a9d0(*(ebx + 0x10))
    unimplemented  {fld1 }
    int32_t ecx_16 = *(data_27e7a40 + 0x548)
    int32_t var_670_17 = ecx_16
    float var_670_18 = fconvert.s(unimplemented  {fstp dword [esp], st0})
    unimplemented  {fstp dword [esp], st0}
    void* var_674_15 = &var_640
    void* ecx_18
    
    if (*(ecx_16 + 0x43350) != 0)
        sub_4f9fe0(*(ebx + 0xc), var_674_15)
        sub_4fa2c0(*(ebx + 0xc), 0)
        ecx_18 = sub_4fa2c0(*(ebx + 0x10), 1)
    else
        sub_4f9fe0(*(ebx + 0x10), var_674_15)
        ecx_18 = sub_4fa2c0(*(ebx + 0xc), 1)
    
    int32_t eax_44 = *(ebx + 0xbc)
    int32_t var_670_21 = eax_44
    int32_t* result = sub_45ec50(eax_44, &var_640, ecx_18)
    fsbase->NtTib.ExceptionList = ExceptionList
    sub_5a6aba(eax_2 ^ &var_65c)
    return result
}
