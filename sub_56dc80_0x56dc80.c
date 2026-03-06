// 函数名称: sub_56dc80
// 虚拟地址: 0x56dc80
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __fastcallsub_56dc80(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: void var_bc
    void var_bc
    int32_t eax_1 = __security_cookie ^ &var_bc
    int32_t* esi = arg2
    int32_t* ebx = arg1
    int32_t* var_b0 = ebx
    void* result
    long double st0
    
    if (*(esi[0x16] + 4) == 0x20)
        st0, result, arg1 = sub_572ee0(arg1)
    
    if (*(esi[0x16] + 4) != 0x20 || result.b == 0)
        float var_b8
        float var_68
        float var_30
        float var_2c
        float var_28
        
        if (*ebx == 9)
            unimplemented  {fild st0, dword [ebx+0xc]}
            unimplemented  {fmul st0, qword [0x8a5940]}
            var_b8 = fconvert.s(unimplemented  {fstp dword [esp+0x10], st0})
            unimplemented  {fstp dword [esp+0x10], st0}
            unimplemented  {fld st0, dword [esi+0x28]}
            unimplemented  {fsub st0, dword [esi+0x1c]}
            var_30 = fconvert.s(unimplemented  {fstp dword [esp+0x98], st0})
            unimplemented  {fstp dword [esp+0x98], st0}
            unimplemented  {fld st0, dword [esi+0x2c]}
            unimplemented  {fsub st0, dword [esi+0x20]}
            float var_2c_1 = fconvert.s(unimplemented  {fstp dword [esp+0x9c], st0})
            unimplemented  {fstp dword [esp+0x9c], st0}
            unimplemented  {fld st0, dword [esi+0x30]}
            unimplemented  {fsub st0, dword [esi+0x24]}
            float var_28_1 = fconvert.s(unimplemented  {fstp dword [esp+0xa0], st0})
            unimplemented  {fstp dword [esp+0xa0], st0}
            unimplemented  {fld st0, dword [esp+0x98]}
            unimplemented  {fld st0, dword [esp+0x10]}
            unimplemented  {fld st0, st0}
            unimplemented  {fmulp st2, st0}
            unimplemented  {fmulp st2, st0}
            unimplemented  {fxch st0, st1}
            unimplemented  {fxch st0, st1}
            var_68 = fconvert.s(unimplemented  {fstp dword [esp+0x60], st0})
            unimplemented  {fstp dword [esp+0x60], st0}
            unimplemented  {fld st0, dword [esp+0x9c]}
            unimplemented  {fmul st0, st1}
            float var_64_1 = fconvert.s(unimplemented  {fstp dword [esp+0x64], st0})
            unimplemented  {fstp dword [esp+0x64], st0}
            unimplemented  {fmul st0, dword [esp+0xa0]}
            float var_60_1 = fconvert.s(unimplemented  {fstp dword [esp+0x68], st0})
            unimplemented  {fstp dword [esp+0x68], st0}
            unimplemented  {fld st0, dword [esi+0x1c]}
            unimplemented  {fadd dword [esp+0x60]}
            var_30 = fconvert.s(unimplemented  {fstp dword [esp+0x98], st0})
            unimplemented  {fstp dword [esp+0x98], st0}
            arg1 = var_30
            unimplemented  {fld st0, dword [esp+0x64]}
            unimplemented  {fadd dword [esi+0x20]}
            var_2c = fconvert.s(unimplemented  {fstp dword [esp+0x9c], st0})
            unimplemented  {fstp dword [esp+0x9c], st0}
            unimplemented  {fld st0, dword [esp+0x68]}
            unimplemented  {fadd dword [esi+0x24]}
            esi[7] = arg1
            esi[8] = var_2c
            var_28 = fconvert.s(unimplemented  {fstp dword [esp+0xa0], st0})
            unimplemented  {fstp dword [esp+0xa0], st0}
            esi[9] = var_28
        
        if (*ebx == 3)
            int32_t* eax_4 = esi[0x16]
            float var_a4
            float var_a0
            void var_84
            float var_50
            float var_24
            int32_t var_20
            int32_t mxcsr
            
            if (eax_4 != 0 && eax_4[1] == 0x19)
                int16_t x87control_1 =
                    sub_4138d0(eax_4, &var_30, &data_3079240, &data_3079234, &data_8409cc)
                unimplemented  {fldz }
                var_68 = fconvert.s(unimplemented  {fst dword [esp+0x68], st0})
                float var_64_2 = fconvert.s(unimplemented  {fstp dword [esp+0x6c], st0})
                unimplemented  {fstp dword [esp+0x6c], st0}
                unimplemented  {fild st0, dword [eax+0x14]}
                float var_94_1 = var_68
                float var_90_1 = var_64_2
                float var_a8_1 = fconvert.s(unimplemented  {fstp dword [esp+0x20], st0})
                unimplemented  {fstp dword [esp+0x20], st0}
                unimplemented  {fld st0, dword [esp+0x20]}
                float var_60_2 = fconvert.s(unimplemented  {fstp dword [esp+0x68], st0})
                unimplemented  {fstp dword [esp+0x68], st0}
                unimplemented  {fild st0, dword [eax+0x18]}
                float var_8c_1 = var_60_2
                float var_b4_1 = fconvert.s(unimplemented  {fstp dword [esp+0x14], st0})
                unimplemented  {fstp dword [esp+0x14], st0}
                unimplemented  {fld st0, dword [esp+0x14]}
                float var_5c_1 = fconvert.s(unimplemented  {fstp dword [esp+0x6c], st0})
                unimplemented  {fstp dword [esp+0x6c], st0}
                unimplemented  {fld st0, qword [0x8a5698]}
                float var_88_1 = var_5c_1
                sub_68b980(mxcsr, x87control_1, st0)
                var_b8 = fconvert.s(unimplemented  {fstp dword [esp+0x10], st0})
                unimplemented  {fstp dword [esp+0x10], st0}
                unimplemented  {fld st0, dword [esp+0x20]}
                unimplemented  {fdiv st0, dword [esp+0x1c]}
                float var_b4_2 = fconvert.s(unimplemented  {fstp dword [esp+0x1c], st0})
                unimplemented  {fstp dword [esp+0x1c], st0}
                unimplemented  {fld st0, dword [esp+0x1c]}
                float var_cc_1 = fconvert.s(unimplemented  {fstp dword [esp+0x4], st0})
                unimplemented  {fstp dword [esp+0x4], st0}
                unimplemented  {fld st0, dword [esp+0x18]}
                float var_d0_1 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                unimplemented  {fstp dword [esp], st0}
                sub_4e4540(&var_68, var_d0_1, var_cc_1)
                float edx_3 = var_68
                var_a0 = var_64_2
                int32_t ecx_3 = data_3079234
                var_a4 = edx_3
                int32_t var_40_1 = ecx_3
                float var_9c_1 = var_60_2
                int32_t edx_5 = data_3079238
                float var_98_1 = var_5c_1
                int32_t eax_8 = data_307923c
                var_50 = var_2c
                int32_t var_3c_1 = edx_5
                int32_t var_38_1 = eax_8
                int32_t var_44_1 = var_20
                float var_4c_1 = var_28
                float var_48_1 = var_24
                __builtin_memcpy(&var_84, &var_50, 0x1c)
                int32_t* eax_10 = sub_4e4c10(var_24, var_28, &var_a4, &ebx[4])
                int32_t ecx_7 = eax_10[1]
                var_50 = *eax_10
                int32_t var_4c_2 = ecx_7
                int32_t var_48_2 = eax_10[2]
                int32_t var_44_2 = eax_10[3]
                int32_t var_40_2 = eax_10[4]
                unimplemented  {fldz }
                unimplemented  {fld st0, st0}
                unimplemented  {fmul st0, st1}
                int32_t var_60_3 = 0x3f800000
                int32_t var_3c_2 = eax_10[5]
                unimplemented  {fadd st0, st0}
                int32_t var_64_3 = 0
                unimplemented  {faddp st1, st0}
                unimplemented  {faddp st1, st0}
                var_68 = 0f
                var_b8 = fconvert.s(unimplemented  {fstp dword [esp+0x14], st0})
                unimplemented  {fstp dword [esp+0x14], st0}
                unimplemented  {fld st0, dword [esp+0x14]}
                unimplemented  {fchs }
                var_24 = fconvert.s(unimplemented  {fstp dword [esp+0xa8], st0})
                unimplemented  {fstp dword [esp+0xa8], st0}
                arg1 = var_24
                int32_t* var_5c_2 = arg1
                st0, eax_4 = sub_4d7b10(&var_68, &var_50, &var_b8)
                unimplemented  {call 0x4d7b10}
                
                if (eax_4.b != 0)
                    unimplemented  {fld st0, dword [esp+0x84]}
                    unimplemented  {fld st0, dword [esp+0x10]}
                    int32_t* edx_10 = esi[0x16]
                    unimplemented  {fld st0, st0}
                    unimplemented  {fmulp st2, st0}
                    unimplemented  {fmulp st2, st0}
                    float* var_cc_3 = &var_68
                    unimplemented  {fxch st0, st1}
                    unimplemented  {fxch st0, st1}
                    var_68 = fconvert.s(unimplemented  {fstp dword [esp+0x64], st0})
                    unimplemented  {fstp dword [esp+0x64], st0}
                    unimplemented  {fld st0, dword [esp+0x8c]}
                    unimplemented  {fmul st0, st1}
                    float var_64_4 = fconvert.s(unimplemented  {fstp dword [esp+0x68], st0})
                    unimplemented  {fstp dword [esp+0x68], st0}
                    unimplemented  {fmul st0, dword [esp+0x90]}
                    float var_60_4 = fconvert.s(unimplemented  {fstp dword [esp+0x6c], st0})
                    unimplemented  {fstp dword [esp+0x6c], st0}
                    unimplemented  {fld st0, dword [esp+0x64]}
                    unimplemented  {fadd dword [esp+0x7c]}
                    var_30 = fconvert.s(unimplemented  {fstp dword [esp+0x9c], st0})
                    unimplemented  {fstp dword [esp+0x9c], st0}
                    float esi_2 = var_30
                    unimplemented  {fld st0, dword [esp+0x80]}
                    var_68 = esi_2
                    unimplemented  {fadd dword [esp+0x68]}
                    var_2c = fconvert.s(unimplemented  {fstp dword [esp+0xa0], st0})
                    unimplemented  {fstp dword [esp+0xa0], st0}
                    unimplemented  {fld st0, dword [esp+0x84]}
                    float var_64_5 = var_2c
                    unimplemented  {fadd dword [esp+0x6c]}
                    var_28 = fconvert.s(unimplemented  {fstp dword [esp+0xa4], st0})
                    unimplemented  {fstp dword [esp+0xa4], st0}
                    float var_60_5 = var_28
                    var_b8 = sub_4eb490(&var_68, edx_10, esi)
                    eax_4, arg1 = sub_4c6320(0x10)
                    
                    if (eax_4.b != 0)
                        eax_4 = esi
                        unimplemented  {fldz }
                        arg1 = *(var_b8 i+ 0x78)
                        eax_4[0x1a] = fconvert.s(unimplemented  {fstp dword [eax+0x68], st0})
                        unimplemented  {fstp dword [eax+0x68], st0}
                        eax_4[0x1d] = esi_2
                        eax_4[0x1e] = var_2c
                        eax_4[0x19] = arg1
                        eax_4[0x1f] = var_28
                        esi = eax_4
                
                ebx = var_b0
            
            if (*ebx == 3)
                void* esi_3 = esi[0x16]
                
                if (esi_3 != 0 && *(esi_3 + 4) == 2)
                    int16_t x87control_2 =
                        sub_4138d0(eax_4, &var_30, &data_3079240, &data_3079234, &data_8409cc)
                    unimplemented  {fldz }
                    var_68 = fconvert.s(unimplemented  {fst dword [esp+0x68], st0})
                    float var_64_6 = fconvert.s(unimplemented  {fstp dword [esp+0x6c], st0})
                    unimplemented  {fstp dword [esp+0x6c], st0}
                    unimplemented  {fild st0, dword [eax+0x14]}
                    float var_94_2 = var_68
                    float var_a8_2 = fconvert.s(unimplemented  {fstp dword [esp+0x20], st0})
                    unimplemented  {fstp dword [esp+0x20], st0}
                    unimplemented  {fld st0, dword [esp+0x20]}
                    float var_60_6 = fconvert.s(unimplemented  {fstp dword [esp+0x68], st0})
                    unimplemented  {fstp dword [esp+0x68], st0}
                    unimplemented  {fild st0, dword [eax+0x18]}
                    float var_90_2 = var_64_6
                    float var_8c_2 = var_60_6
                    float var_b4_3 = fconvert.s(unimplemented  {fstp dword [esp+0x14], st0})
                    unimplemented  {fstp dword [esp+0x14], st0}
                    unimplemented  {fld st0, dword [esp+0x14]}
                    float var_5c_3 = fconvert.s(unimplemented  {fstp dword [esp+0x6c], st0})
                    unimplemented  {fstp dword [esp+0x6c], st0}
                    unimplemented  {fld st0, qword [0x8a5698]}
                    float var_88_2 = var_5c_3
                    sub_68b980(mxcsr, x87control_2, st0)
                    var_b8 = fconvert.s(unimplemented  {fstp dword [esp+0x10], st0})
                    unimplemented  {fstp dword [esp+0x10], st0}
                    unimplemented  {fld st0, dword [esp+0x20]}
                    unimplemented  {fdiv st0, dword [esp+0x1c]}
                    float var_ac_1 = fconvert.s(unimplemented  {fstp dword [esp+0x24], st0})
                    unimplemented  {fstp dword [esp+0x24], st0}
                    unimplemented  {fld st0, dword [esp+0x24]}
                    float var_cc_4 = fconvert.s(unimplemented  {fstp dword [esp+0x4], st0})
                    unimplemented  {fstp dword [esp+0x4], st0}
                    unimplemented  {fld st0, dword [esp+0x18]}
                    float var_d0_2 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                    unimplemented  {fstp dword [esp], st0}
                    sub_4e4540(&var_68, var_d0_2, var_cc_4)
                    var_a4 = var_68
                    var_a0 = var_64_6
                    float var_9c_2 = var_60_6
                    float var_98_2 = var_5c_3
                    int32_t var_40_3 = data_3079234
                    int32_t var_3c_3 = data_3079238
                    int32_t var_38_2 = data_307923c
                    var_50 = var_2c
                    float var_4c_3 = var_28
                    float var_48_3 = var_24
                    int32_t var_44_3 = var_20
                    __builtin_memcpy(&var_84, &var_50, 0x1c)
                    int32_t* eax_19 = sub_4e4c10(var_20, var_24, &var_a4, &ebx[4])
                    int32_t edx_19 = eax_19[1]
                    var_50 = *eax_19
                    int32_t var_4c_4 = edx_19
                    int32_t var_48_4 = eax_19[2]
                    int32_t var_44_4 = eax_19[3]
                    int32_t var_40_4 = eax_19[4]
                    unimplemented  {fldz }
                    unimplemented  {fld st0, st0}
                    unimplemented  {fmul st0, st1}
                    int32_t var_64_7 = 0
                    int32_t var_3c_4 = eax_19[5]
                    unimplemented  {fadd st0, st0}
                    var_68 = 0f
                    arg1 = &var_b8
                    unimplemented  {faddp st1, st0}
                    unimplemented  {faddp st1, st0}
                    int32_t var_60_7 = 0x3f800000
                    var_b8 = fconvert.s(unimplemented  {fstp dword [esp+0x14], st0})
                    unimplemented  {fstp dword [esp+0x14], st0}
                    unimplemented  {fld st0, dword [esp+0x14]}
                    unimplemented  {fchs }
                    float var_24_1 = fconvert.s(unimplemented  {fstp dword [esp+0xa8], st0})
                    unimplemented  {fstp dword [esp+0xa8], st0}
                    float var_5c_4 = var_24_1
                    char eax_21 = sub_4d7b10(&var_68, &var_50, &var_b8)
                    unimplemented  {call 0x4d7b10}
                    
                    if (eax_21 != 0)
                        unimplemented  {fld st0, dword [esp+0x84]}
                        int32_t* edx_22 = data_3079270
                        unimplemented  {fld st0, dword [esp+0x10]}
                        unimplemented  {fld st0, st0}
                        unimplemented  {fmulp st2, st0}
                        unimplemented  {fmulp st2, st0}
                        unimplemented  {fxch st0, st1}
                        unimplemented  {fxch st0, st1}
                        var_68 = fconvert.s(unimplemented  {fstp dword [esp+0x64], st0})
                        unimplemented  {fstp dword [esp+0x64], st0}
                        unimplemented  {fld st0, dword [esp+0x8c]}
                        unimplemented  {fmul st0, st1}
                        float var_64_8 = fconvert.s(unimplemented  {fstp dword [esp+0x68], st0})
                        unimplemented  {fstp dword [esp+0x68], st0}
                        unimplemented  {fmul st0, dword [esp+0x90]}
                        float var_60_8 = fconvert.s(unimplemented  {fstp dword [esp+0x6c], st0})
                        unimplemented  {fstp dword [esp+0x6c], st0}
                        unimplemented  {fld st0, dword [esp+0x64]}
                        unimplemented  {fadd dword [esp+0x7c]}
                        var_30 = fconvert.s(unimplemented  {fstp dword [esp+0x9c], st0})
                        unimplemented  {fstp dword [esp+0x9c], st0}
                        unimplemented  {fld st0, dword [esp+0x80]}
                        unimplemented  {fadd dword [esp+0x68]}
                        float var_2c_2 = fconvert.s(unimplemented  {fstp dword [esp+0xa0], st0})
                        unimplemented  {fstp dword [esp+0xa0], st0}
                        unimplemented  {fld st0, dword [esp+0x84]}
                        unimplemented  {fadd dword [esp+0x6c]}
                        float var_28_2 = fconvert.s(unimplemented  {fstp dword [esp+0xa4], st0})
                        unimplemented  {fstp dword [esp+0xa4], st0}
                        char** eax_22 = sub_4d4870(edx_22)
                        eax_22[2] = var_30
                        int32_t eax_24 = eax_22[0x1a]
                        eax_22[3] = var_2c_2
                        eax_22[4] = var_28_2
                        data_3079298 = eax_24
                        int32_t* eax_25
                        eax_25, arg1 = sub_4e7410(eax_22[1])
                        void* eax_26 = *eax_25
                        
                        if (eax_26 != 0 && *(eax_26 + 0x40) s> 0)
                            int32_t eax_27 = data_307929c
                            
                            if (eax_27 != 0xffffffff)
                                unimplemented  {fld st0, dword [0x873c70]}
                                int32_t* var_cc_7 = arg1
                                float var_cc_8 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                                unimplemented  {fstp dword [esp], st0}
                                unimplemented  {fldz }
                                int32_t* var_d4_3 = arg1
                                float var_d4_4 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                                unimplemented  {fstp dword [esp], st0}
                                arg1 = sub_516bc0(eax_22, eax_22[1], eax_27, 0, var_d4_4, 0, var_cc_8)
                                unimplemented  {call 0x516bc0}
                    
                    ebx = var_b0
        
        result = sub_4d5500(arg1, data_3079298)
        void* result_1 = result
        
        if (result_1 == 0)
        label_56e386:
            
            if (*ebx == 0 && ebx[1] == 0x74)
                unimplemented  {fldz }
                var_68 = fconvert.s(unimplemented  {fst dword [esp+0x60], st0})
                float edx_26 = var_68
                float var_64_9 = fconvert.s(unimplemented  {fst dword [esp+0x64], st0})
                float var_60_9 = fconvert.s(unimplemented  {fst dword [esp+0x68], st0})
                var_68 = fconvert.s(unimplemented  {fstp dword [esp+0x60], st0})
                unimplemented  {fstp dword [esp+0x60], st0}
                unimplemented  {fld st0, dword [0x8a55a8]}
                data_3079240 = edx_26
                float var_64_10 = fconvert.s(unimplemented  {fstp dword [esp+0x64], st0})
                unimplemented  {fstp dword [esp+0x64], st0}
                float edx_27 = var_68
                unimplemented  {fld st0, dword [0x8a55a4]}
                data_3079244 = var_64_9
                float var_60_10 = fconvert.s(unimplemented  {fstp dword [esp+0x68], st0})
                unimplemented  {fstp dword [esp+0x68], st0}
                unimplemented  {fldz }
                data_3079248 = var_60_9
                unimplemented  {fld st0, st0}
                unimplemented  {fsub st0, st1}
                data_3079234 = edx_27
                data_3079238 = var_64_10
                data_307923c = var_60_10
                var_30 = fconvert.s(unimplemented  {fstp dword [esp+0x98], st0})
                unimplemented  {fstp dword [esp+0x98], st0}
                unimplemented  {fld st0, qword [0x8a5560]}
                unimplemented  {fsubr st0, st1}
                float var_2c_3 = fconvert.s(unimplemented  {fstp dword [esp+0x9c], st0})
                unimplemented  {fstp dword [esp+0x9c], st0}
                unimplemented  {fsub st0, qword [0x8a53e0]}
                float var_28_3 = fconvert.s(unimplemented  {fstp dword [esp+0xa0], st0})
                unimplemented  {fstp dword [esp+0xa0], st0}
                unimplemented  {fld st0, dword [esp+0x98]}
                unimplemented  {fld st0, dword [esp+0xa0]}
                sub_68680a()
                var_b8 = fconvert.s(unimplemented  {fstp dword [esp+0x10], st0})
                unimplemented  {fstp dword [esp+0x10], st0}
                unimplemented  {fld st0, dword [esp+0x10]}
                unimplemented  {fchs }
                data_307924c = fconvert.s(unimplemented  {fstp dword [0x307924c], st0})
                unimplemented  {fstp dword [0x307924c], st0}
                unimplemented  {fld st0, dword [esp+0x9c]}
                unimplemented  {fld st0, dword [esp+0xa0]}
                unimplemented  {fchs }
                result = sub_68680a()
                var_b8 = fconvert.s(unimplemented  {fstp dword [esp+0x10], st0})
                unimplemented  {fstp dword [esp+0x10], st0}
                unimplemented  {fld st0, dword [esp+0x10]}
                unimplemented  {fchs }
                data_3079250 = fconvert.s(unimplemented  {fstp dword [0x3079250], st0})
                unimplemented  {fstp dword [0x3079250], st0}
        else if (*ebx == 0)
            if (ebx[1] == 0x61)
                result = sub_4e7410(*(result_1 + 4))
                
                if (*(*result + 0x40) s> 0)
                    int32_t ecx_22 = data_307929c + 1
                    data_307929c = ecx_22
                    
                    if (ecx_22 s< *(*result + 0x40))
                        unimplemented  {fld st0, dword [0x873c70]}
                        int32_t var_cc_9 = ecx_22
                        float var_cc_10 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                        unimplemented  {fstp dword [esp], st0}
                        unimplemented  {fldz }
                        int32_t var_d4_5 = ecx_22
                        float var_d4_6 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                        unimplemented  {fstp dword [esp], st0}
                        result =
                            sub_516bc0(result_1, *(result_1 + 4), ecx_22, 0, var_d4_6, 0, var_cc_10)
                        unimplemented  {call 0x516bc0}
                    else
                        data_307929c = 0xffffffff
                        result = sub_5170a0(result_1)
            
            goto label_56e386
    
    sub_5a6aba(eax_1 ^ &var_bc)
    return result
}
