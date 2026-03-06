// 函数名称: sub_50f650
// 虚拟地址: 0x50f650
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_50f650(int32_t* arg1, int32_t arg2, int32_t* arg3)
{
    // 第一条实际指令: int32_t var_c = 0xffffffff
    int32_t var_c = 0xffffffff
    int32_t (* var_10)(void* arg1) = sub_698a8c
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t var_194
    int32_t eax_2 = __security_cookie ^ &var_194
    int32_t __saved_edi
    int32_t eax_4 = __security_cookie ^ &__saved_edi
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* edi = arg1
    int32_t* esi = *edi
    int32_t* result = arg3
    int32_t* var_184 = edi
    int32_t* result_1 = result
    
    if (esi != 0)
        int32_t* eax_5
        void* edx_1
        eax_5, edx_1 = sub_50c140(esi)
        int32_t* ecx_1 = eax_5
        result = nullptr
        int32_t* var_164_1 = ecx_1
        int32_t* result_2 = nullptr
        
        if (ecx_1[1] s> 0)
            var_194 = 0
            
            while (true)
                int32_t* esi_2 = *ecx_1 + var_194
                int128_t* eax_6
                eax_6, edx_1 = sub_50c830(result, edx_1, edi)
                int128_t* ebx_1 = eax_6
                
                if (*(ebx_1 + 0x64) s<= *(ebx_1 + 0x5c))
                    eax_6.b = esi_2[0xc].b
                else
                    eax_6.b = *(ebx_1 + 0x68)
                
                if (eax_6.b == 0 && sub_50ed60(arg2, edx_1, esi_2) != 0)
                    edx_1 = ebx_1[0x4c].d
                    __builtin_memcpy(ebx_1 + 8, &edi[2], 0x54)
                    int32_t eax_9
                    
                    if (edx_1 s> *(ebx_1 + 0x5c))
                        eax_9 = *(ebx_1 + 0x4c4)
                    
                    if (edx_1 s<= *(ebx_1 + 0x5c) || eax_9 == 0)
                        int32_t eax_10 = *esi_2
                        
                        if (eax_10 u> 8)
                            sub_4c5870("Halt", &data_83f3d3, "FabDef.cpp", 0x5e6, "FabDraw")
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_4c5a30()
                            noreturn
                        
                        switch (eax_10)
                            case 1
                                edx_1 = sub_50e1c0(esi_2, ebx_1)
                                int16_t top = top - 1
                                unimplemented  {call 0x50e1c0}
                            case 2
                                edx_1 = sub_50dbb0(esi_2, ebx_1)
                            case 3
                                edx_1 = sub_50d050(esi_2, ebx_1)
                            case 4
                                edx_1 = sub_50cdc0(esi_2)
                            case 5
                                edx_1 = sub_50eba0(eax_10, arg2, result_1, esi_2, arg2)
                            case 6
                                edx_1 = sub_50edc0(eax_10, ebx_1, result_1, esi_2)
                                unimplemented  {call 0x50edc0}
                            case 7
                                edx_1 = data_27e7fd0
                                
                                if (*(edx_1 + 0x35) != 0)
                                    void var_c8
                                    sub_50c290(&var_c8, edx_1, ebx_1, esi_2)
                                    void var_80
                                    __builtin_memcpy(&var_80, &var_c8, 0x24)
                                    float var_118[0x4]
                                    float var_74
                                    float* eax_12 = sub_465b90(&var_118, &var_74)
                                    int32_t edx_3 = eax_12[1]
                                    float var_148 = *eax_12
                                    int32_t var_144_1 = edx_3
                                    int32_t var_140_1 = eax_12[2]
                                    int32_t var_13c_1 = eax_12[3]
                                    float var_e8[0x8]
                                    float var_68
                                    sub_4661a0(&var_e8, &var_80, &var_148, &var_68)
                                    void var_3c
                                    __builtin_memcpy(&var_3c, &var_e8, 0x20)
                                    float var_108[0x7]
                                    sub_405f60(&var_108, ebx_1 + 0x3c)
                                    int32_t var_a0
                                    __builtin_memcpy(&var_a0, &var_108, 0x20)
                                    sub_4dad50()
                                    unimplemented  {fld st0, dword [0x873c70]}
                                    float var_180_1 =
                                        fconvert.s(unimplemented  {fst dword [esp+0x24], st0})
                                    float var_17c_1 =
                                        fconvert.s(unimplemented  {fstp dword [esp+0x28], st0})
                                    unimplemented  {fstp dword [esp+0x28], st0}
                                    *(data_27e7fe4 + 0x254) = 0
                                    float var_160 = var_180_1
                                    float var_15c_1 = var_17c_1
                                    int32_t var_128
                                    sub_405e30(&var_128, &var_160, &data_840a00)
                                    int32_t var_158 = var_128
                                    int32_t var_124
                                    int32_t var_154_1 = var_124
                                    int32_t var_11c
                                    int32_t edx_9 = var_11c
                                    int32_t var_120
                                    int32_t var_150_1 = var_120
                                    int32_t var_14c_1 = edx_9
                                    
                                    if ((data_31667cc & 1) == 0)
                                        data_31667cc.d |= 1
                                        int32_t var_c_1 = 0
                                        char** eax_16
                                        eax_16, edx_9 = sub_509140(3, "sys/editor/camera.texture")
                                        data_31667c8 = eax_16
                                        int32_t var_c_2 = 0xffffffff
                                    
                                    sub_4d9aa0(&data_84076c, edx_9, &var_158, data_31667c8, 
                                        &data_be4aac, nullptr)
                                    unimplemented  {call 0x4d9aa0}
                                    *(data_27e7fe4 + 0x254) = 0
                                    sub_4dae60()
                                    
                                    if ((data_31667cc & 2) == 0)
                                        data_31667cc.d |= 2
                                        int32_t var_c_3 = 1
                                        data_31667c4 =
                                            sub_509140(2, "sys/editor/arrow_widget.structure")
                                        int32_t var_c_4 = 0xffffffff
                                    
                                    unimplemented  {fld st0, dword [0x873c70]}
                                    float var_178_1 =
                                        fconvert.s(unimplemented  {fst dword [esp+0x2c], st0})
                                    float var_174_1 =
                                        fconvert.s(unimplemented  {fst dword [esp+0x30], st0})
                                    float var_170_1 =
                                        fconvert.s(unimplemented  {fstp dword [esp+0x34], st0})
                                    unimplemented  {fstp dword [esp+0x34], st0}
                                    unimplemented  {fld1 }
                                    float var_138 = var_178_1
                                    float var_16c_1 =
                                        fconvert.s(unimplemented  {fstp dword [esp+0x38], st0})
                                    unimplemented  {fstp dword [esp+0x38], st0}
                                    float var_134_1 = var_174_1
                                    float var_130_1 = var_170_1
                                    float var_12c_1 = var_16c_1
                                    sub_4dd970(&var_138)
                                    unimplemented  {fld st0, dword [esp+0x104]}
                                    unimplemented  {fmul st0, qword [0x8a5368]}
                                    char** eax_21 = data_31667c4
                                    float var_5c
                                    __builtin_memcpy(&var_5c, &var_a0, 0x20)
                                    var_5c = fconvert.s(unimplemented  {fstp dword [esp+0x148], st0})
                                    unimplemented  {fstp dword [esp+0x148], st0}
                                    sub_4e0760(eax_21)
                                    edx_1 = sub_4dd970(&data_840b64)
                            case 8
                                edx_1 = *(ebx_1 + 0x4b8)
                                
                                if (sub_4eb5a0(esi_2, edx_1) != 0)
                                    edx_1 = sub_4f2850(&data_be4c5c)
                    else
                        edx_1 = eax_9(esi_2, ebx_1, eax_4)
                
                ecx_1 = var_164_1
                var_194 += 0xb8
                result = result_2 + 1
                result_2 = result
                
                if (result s>= ecx_1[1])
                    break
                
                edi = var_184
    
    fsbase->NtTib.ExceptionList = ExceptionList
    sub_5a6aba(eax_2 ^ &var_194)
    return result
}
