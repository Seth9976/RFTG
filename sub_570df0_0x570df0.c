// 函数名称: sub_570df0
// 虚拟地址: 0x570df0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void __fastcallsub_570df0(int32_t* arg1, char* arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = __ehhandler$?_Getffldx@?$num_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@ABAHPADAAV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@1AAVios_base@2@PAH@Z
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_bc = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    float* edi = arg2
    *arg1 = 0
    float* var_44 = edi
    int32_t* var_24 = arg1
    
    if (data_26a7764 != 0)
        int32_t eax_3 = data_273abf0
        
        if (eax_3 u> 5)
            sub_4c5870("Halt", &data_83f3d3, "Editor\FabEditor.cpp", 0x3af, "ComputeTransformStyle")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        float var_48
        float var_40
        float var_3c
        float var_28
        int32_t var_20
        void arg_4
        float* entry_ebx
        
        switch (eax_3)
            case 2
                if (data_2727bb8 != 0xffffffff)
                    if ((data_316559c & 0x10) == 0)
                        data_316559c.d |= 0x10
                        int32_t var_8_9 = 4
                        char** eax_31
                        eax_31, arg2 = sub_509140(0x20, "sys/editor/translate.fab")
                        arg1 = var_24
                        data_3165588 = eax_31
                        int32_t var_8_10 = 0xffffffff
                    
                    if ((data_316559c & 0x20) == 0)
                        data_316559c.d |= 0x20
                        int32_t var_8_11 = 5
                        char const* const var_c0_6 = "RedArrow"
                        int32_t eax_33
                        eax_33, arg2 = sub_510710(data_3165588, arg2)
                        arg1 = var_24
                        data_3165584 = eax_33
                        int32_t var_8_12 = 0xffffffff
                    
                    if ((data_316559c & 0x40) == 0)
                        data_316559c.d |= 0x40
                        int32_t var_8_13 = 6
                        char const* const var_c0_7 = "GreenArrow"
                        int32_t eax_35
                        eax_35, arg2 = sub_510710(data_3165588, arg2)
                        arg1 = var_24
                        data_3165580 = eax_35
                        int32_t var_8_14 = 0xffffffff
                    
                    if ((data_316559c & 0x80) == 0)
                        data_316559c.d |= 0x80
                        int32_t var_8_15 = 7
                        char const* const var_c0_8 = "BlueArrow"
                        arg1 = var_24
                        data_316557c = sub_510710(data_3165588, arg2)
                        int32_t var_8_16 = 0xffffffff
                    
                    int32_t eax_38 = data_2727bb8
                    
                    if (eax_38 == data_3165584)
                        *arg1 = 1
                    else if (eax_38 == data_3165580)
                        *arg1 = 2
                    else if (eax_38 == data_316557c)
                        *arg1 = 3
                
                int32_t i = 0
                var_28 = fconvert.s(fconvert.t(10000f))
                var_20 = 2
                int32_t var_1c_2 = 3
                int32_t var_18_2 = 4
                int32_t i_1 = 0
                
                do
                    int32_t eax_39 = (&var_20)[i]
                    
                    if ((eax_39 != 2 || *arg1 != 3) && (eax_39 != 3 || *arg1 != 1)
                            && (eax_39 != 4 || *arg1 != 2))
                        void var_8c
                        int32_t* eax_40 = sub_570c00(&var_8c, edi, eax_39)
                        int32_t edx_7 = eax_40[1]
                        var_3c = *eax_40
                        int32_t ecx_11 = eax_40[2]
                        int32_t edx_8 = eax_40[3]
                        sub_4d7b10(&var_3c, &arg_4, &var_40)
                        long double x87_r7_4 = float.t(0)
                        fconvert.t(var_40) - x87_r7_4
                        bool p_2 = unimplemented  {test ah, 0x5}
                        
                        if (p_2)
                            long double x87_r6_4 = fconvert.t(var_28)
                            x87_r6_4 - x87_r7_4
                            
                            if ((((x87_r6_4 < x87_r7_4 ? 1 : 0) << 8
                                    | (is_unordered.t(x87_r6_4, x87_r7_4) ? 1 : 0) << 0xa
                                    | (x87_r6_4 == x87_r7_4 ? 1 : 0) << 0xe | 0x3800):1.b & 0x41) == 0)
                                var_28 = fconvert.s(x87_r7_4)
                                float eax_42 = (&var_20)[i_1]
                                *entry_ebx = var_3c
                                var_48 = eax_42
                                entry_ebx[1] = edx_7
                                entry_ebx[2] = ecx_11
                                entry_ebx[3] = edx_8
                        
                        arg1 = var_24
                        edi = var_44
                    
                    i = i_1 + 1
                    i_1 = i
                while (i s< 3)
            case 3
                if (data_2727bb8 == 0xffffffff)
                label_570fca:
                    var_20 = 5
                    float var_2c_1 = fconvert.s(fconvert.t(10000f))
                    int32_t var_1c_1 = 6
                    int32_t var_18_1 = 7
                    int32_t var_24_1 = 0
                    
                    while (true)
                        void var_6c
                        int32_t* eax_24 = sub_570c00(&var_6c, edi, (&var_20)[var_24_1])
                        int32_t edx_3 = eax_24[1]
                        var_3c = *eax_24
                        int32_t ecx_4 = eax_24[2]
                        int32_t edx_4 = eax_24[3]
                        sub_4d7b10(&var_3c, &arg_4, &var_28)
                        long double x87_r7_2 = float.t(0)
                        fconvert.t(var_28) - x87_r7_2
                        bool p_1 = unimplemented  {test ah, 0x5}
                        
                        if (p_1)
                            long double x87_r6_2 = fconvert.t(var_2c_1)
                            x87_r6_2 - x87_r7_2
                            
                            if ((((x87_r6_2 < x87_r7_2 ? 1 : 0) << 8
                                    | (is_unordered.t(x87_r6_2, x87_r7_2) ? 1 : 0) << 0xa
                                    | (x87_r6_2 == x87_r7_2 ? 1 : 0) << 0xe | 0x3800):1.b & 0x41) == 0)
                                var_2c_1 = fconvert.s(x87_r7_2)
                                float eax_26 = (&var_20)[var_24_1]
                                *entry_ebx = var_3c
                                var_40 = eax_26
                                entry_ebx[1] = edx_3
                                entry_ebx[2] = ecx_4
                                entry_ebx[3] = edx_4
                        
                        int32_t eax_29 = var_24_1 + 1
                        var_24_1 = eax_29
                        
                        if (eax_29 s>= 3)
                            break
                        
                        edi = var_44
                else
                    if ((data_316559c & 1) == 0)
                        data_316559c.d |= 1
                        int32_t var_8_1 = 0
                        char** eax_5
                        eax_5, arg2 = sub_509140(0x20, "sys/editor/rotate_quarter.fab")
                        data_3165598 = eax_5
                        int32_t var_8_2 = 0xffffffff
                    
                    if ((data_316559c & 2) == 0)
                        data_316559c.d |= 2
                        int32_t var_8_3 = 1
                        char const* const var_c0_1 = "RedRing"
                        int32_t eax_7
                        eax_7, arg2 = sub_510710(data_3165598, arg2)
                        data_3165594 = eax_7
                        int32_t var_8_4 = 0xffffffff
                    
                    if ((data_316559c & 4) == 0)
                        data_316559c.d |= 4
                        int32_t var_8_5 = 2
                        char const* const var_c0_2 = "GreenRing"
                        int32_t eax_9
                        eax_9, arg2 = sub_510710(data_3165598, arg2)
                        data_3165590 = eax_9
                        int32_t var_8_6 = 0xffffffff
                    
                    if ((data_316559c & 8) == 0)
                        data_316559c.d |= 8
                        int32_t var_8_7 = 3
                        char const* const var_c0_3 = "BlueRing"
                        data_316558c = sub_510710(data_3165598, arg2)
                        int32_t var_8_8 = 0xffffffff
                    
                    int32_t eax_12 = data_2727bb8
                    
                    if (eax_12 == data_3165594)
                        void var_7c
                        float* eax_13 = sub_570c00(&var_7c, edi, 6)
                        int32_t edx = eax_13[1]
                        int32_t esi_2 = eax_13[2]
                        int32_t eax_14 = eax_13[3]
                        *entry_ebx = *eax_13
                        entry_ebx[1] = edx
                        entry_ebx[2] = esi_2
                        entry_ebx[3] = eax_14
                    else if (eax_12 != data_3165590)
                        if (eax_12 != data_316558c)
                            goto label_570fca
                        
                        void var_9c
                        float* eax_19 = sub_570c00(&var_9c, edi, 5)
                        int32_t edx_2 = eax_19[1]
                        int32_t esi_6 = eax_19[2]
                        int32_t eax_20 = eax_19[3]
                        *entry_ebx = *eax_19
                        entry_ebx[1] = edx_2
                        entry_ebx[2] = esi_6
                        entry_ebx[3] = eax_20
                    else
                        void var_5c
                        float* eax_16 = sub_570c00(&var_5c, edi, 7)
                        int32_t edx_1 = eax_16[1]
                        int32_t esi_4 = eax_16[2]
                        int32_t eax_17 = eax_16[3]
                        *entry_ebx = *eax_16
                        entry_ebx[1] = edx_1
                        entry_ebx[2] = esi_4
                        entry_ebx[3] = eax_17
            case 4
                var_20 = 9
                var_28 = fconvert.s(fconvert.t(10000f))
                int32_t var_1c_3 = 0xa
                int32_t var_18_3 = 0xb
                int32_t var_24_2 = 0
                
                while (true)
                    void var_ac
                    int32_t* eax_48 = sub_570c00(&var_ac, edi, (&var_20)[var_24_2])
                    int32_t edx_11 = eax_48[1]
                    var_3c = *eax_48
                    int32_t ecx_15 = eax_48[2]
                    int32_t edx_12 = eax_48[3]
                    sub_4d7b10(&var_3c, &arg_4, &var_48)
                    long double x87_r7_6 = float.t(0)
                    fconvert.t(var_48) - x87_r7_6
                    bool p_3 = unimplemented  {test ah, 0x5}
                    
                    if (p_3)
                        long double x87_r6_6 = fconvert.t(var_28)
                        x87_r6_6 - x87_r7_6
                        
                        if ((((x87_r6_6 < x87_r7_6 ? 1 : 0) << 8
                                | (is_unordered.t(x87_r6_6, x87_r7_6) ? 1 : 0) << 0xa
                                | (x87_r6_6 == x87_r7_6 ? 1 : 0) << 0xe | 0x3800):1.b & 0x41) == 0)
                            var_28 = fconvert.s(x87_r7_6)
                            float eax_50 = (&var_20)[var_24_2]
                            *entry_ebx = var_3c
                            var_40 = eax_50
                            entry_ebx[1] = edx_11
                            entry_ebx[2] = ecx_15
                            entry_ebx[3] = edx_12
                    
                    int32_t eax_53 = var_24_2 + 1
                    var_24_2 = eax_53
                    
                    if (eax_53 s>= 3)
                        break
                    
                    edi = var_44
    
    fsbase->NtTib.ExceptionList = ExceptionList
    sub_5a6aba(eax_2 ^ &__saved_ebp)
}
