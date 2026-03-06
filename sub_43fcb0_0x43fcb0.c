// 函数名称: sub_43fcb0
// 虚拟地址: 0x43fcb0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_43fcb0()
{
    // 第一条实际指令: int32_t var_c = 0xffffffff
    int32_t var_c = 0xffffffff
    int32_t (* var_10)(void* arg1) = sub_69260a
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    void var_64
    int32_t eax_2 = __security_cookie ^ &var_64
    int32_t __saved_edi
    int32_t var_74 = __security_cookie ^ &__saved_edi
    fsbase->NtTib.ExceptionList = &ExceptionList
    bool cond:0 = (data_31657a8 & 1) != 0
    int32_t* ebx = *(data_27e7a40 + 0x548)
    int32_t* var_54 = ebx
    
    if (not(cond:0))
        data_31657a8.d |= 1
        int32_t var_c_1 = 0
        data_31657a4 = sub_4f5220(data_307c530, "img_playerHandBg")
        int32_t var_c_2 = 0xffffffff
    
    int128_t* eax_8 = sub_4f6e90(data_31657a4, sub_4fc3d0(&data_be1cb8, *ebx), &data_83f3d3)
    *eax_8 += 1
    
    if ((data_31657a8 & 2) == 0)
        data_31657a8.d |= 2
        int32_t var_c_3 = 1
        data_31657a0 = sub_4f5220(data_307c72c, "bg")
        int32_t var_c_4 = 0xffffffff
    
    int128_t* eax_11 = sub_4f6e90(data_31657a0, sub_4fc3d0(&data_be1cb8, ebx[0x15]), &data_83f3d3)
    *eax_11 += 1
    
    if ((data_31657a8 & 4) == 0)
        data_31657a8.d |= 4
        int32_t var_c_5 = 2
        data_316579c = sub_4f5220(data_307c1c8, "bg")
        int32_t var_c_6 = 0xffffffff
    
    int128_t* eax_15 = sub_4f6e90(data_316579c, sub_4fc3d0(&data_be1cb8, ebx[0x16]), &data_83f3d3)
    void* ecx_2 = data_27e7a40
    *eax_15 += 1
    int32_t eax_16 = *(*(ecx_2 + 0x548) + 0xbfe8)
    
    if (eax_16 u> 8)
        sub_4c5870("Halt", &data_83f3d3, "..\code\RFTGClient.cpp", 0x3dc0, "DragTargetsUpdate")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_4c5a30()
        noreturn
    
    float var_60
    int32_t edx_3
    
    switch (eax_16)
        case 1, 6, 8
            if (ebx[0x2ff9].b != 0 && *(ebx + 0xbfe5) != 0)
                var_60 = 1.40129846e-45f
                
                if (sub_426c00(&var_60) == 0)
                    edx_3 = data_31657a4
                    var_60.b = 0xc8
                    var_60:1.w = 0xc8c8
                    var_60:3.b = 0xff
                    var_60.b = 0
                    var_60:1.w = 0
                    var_60:3.b = 0
                    float ecx_7 = var_60
                    var_60 = var_60
                    float var_5c_2 = ecx_7
                    int32_t var_78_2 = edx_3
                    sub_4fa720(*var_54, edx_3)
                    ebx = var_54
        case 4
            if (ebx[0x2ff9].b != 0)
                if (*(ebx + 0xbfe5) != 0)
                    var_60 = 1.40129846e-45f
                    
                    if (sub_426c00(&var_60) == 0)
                        int32_t* edx_4 = var_54
                        var_60:1.w = 0xc8c8
                        var_60:3.b = 0xff
                        var_60.b = 0xc8
                        var_60.b = 0
                        var_60:1.w = 0
                        var_60:3.b = 0
                        float var_5c_3 = var_60
                        int32_t ecx_10 = data_31657a4
                        var_60 = var_60
                        int32_t var_78_3 = ecx_10
                        sub_4fa720(*edx_4, edx_4)
                        ebx = var_54
                
                if (ebx[0x2ff9].b != 0 && *(ebx + 0xbfe5) != 0)
                    var_60 = 5.60519386e-45f
                    char eax_27
                    eax_27, edx_3 = sub_426c00(&var_60)
                    
                    if (eax_27 == 0)
                        var_60.b = 0xc8
                        var_60:1.w = 0xc8c8
                        var_60:3.b = 0xff
                        var_60.b = 0
                        var_60:1.w = 0
                        var_60:3.b = 0
                        float ecx_12 = var_60
                        var_60 = var_60
                        float var_5c_4 = ecx_12
                        int32_t var_78_4 = data_316579c
                        sub_4fa720(var_54[0x16], edx_3)
                        ebx = var_54
        case 5
            if (ebx[0x2ff9].b != 0 && *(ebx + 0xbfe5) != 0)
                var_60 = 4.20389539e-45f
                char eax_17
                eax_17, edx_3 = sub_426c00(&var_60)
                
                if (eax_17 == 0)
                    var_60.b = 0xc8
                    var_60:1.w = 0xc8c8
                    var_60:3.b = 0xff
                    var_60.b = 0
                    var_60:1.w = 0
                    var_60:3.b = 0
                    float ecx_4 = var_60
                    var_60 = var_60
                    float var_5c_1 = ecx_4
                    int32_t var_78_1 = data_31657a0
                    sub_4fa720(var_54[0x15], edx_3)
                    ebx = var_54
    
    void* esi_6 = *(data_27e7a40 + 0x548)
    int32_t eax_30 = *(esi_6 + 0x2c0a4)
    long double x87_r7_2
    
    if (eax_30 == 3)
        if (*(esi_6 + 0x2c078) == 1)
            goto label_44003a
        
        x87_r7_2 = fconvert.t(*(esi_6 + 0x43940)) - fconvert.t(data_8c4d34) * fconvert.t(5.0)
    else if (eax_30 != 4 || *(esi_6 + 0x2c078) != 1)
        x87_r7_2 = fconvert.t(*(esi_6 + 0x43940)) - fconvert.t(data_8c4d34) * fconvert.t(5.0)
    else
    label_44003a:
        
        if (sub_419400(&var_60) != 0)
            x87_r7_2 = fconvert.t(*(esi_6 + 0x43940)) - fconvert.t(data_8c4d34) * fconvert.t(5.0)
        else
            x87_r7_2 = fconvert.t(data_8c4d34) * fconvert.t(5.0) + fconvert.t(*(esi_6 + 0x43940))
    
    *(esi_6 + 0x43940) = fconvert.s(x87_r7_2)
    var_60 = fconvert.s(fconvert.t(*(esi_6 + 0x43940)))
    var_60 = fconvert.s(sub_465dd0(fconvert.s(fconvert.t(var_60)), fconvert.s(float.t(0)), 
        fconvert.s(float.t(1))))
    void* eax_32 = data_27e7a40
    *(*(eax_32 + 0x548) + 0x43940) = fconvert.s(fconvert.t(var_60))
    void* edx_6 = *(eax_32 + 0x548)
    int32_t eax_34
    
    if (*(edx_6 + 0xbfe4) != 0 && *(edx_6 + 0xbfe5) != 0)
        eax_34 = *(edx_6 + 0xbfe8)
    
    long double x87_r7_12
    
    if (*(edx_6 + 0xbfe4) != 0 && *(edx_6 + 0xbfe5) != 0
            && (eax_34 == 8 || eax_34 == 6 || eax_34 == 1 || eax_34 == 3 || eax_34 == 5))
        x87_r7_12 = fconvert.t(data_8c4d34) * fconvert.t(5.0) + fconvert.t(ebx[0x10e24])
    else
        x87_r7_12 = fconvert.t(ebx[0x10e24]) - fconvert.t(data_8c4d34) * fconvert.t(5.0)
    
    ebx[0x10e24] = fconvert.s(x87_r7_12)
    var_60 = fconvert.s(fconvert.t(ebx[0x10e24]))
    int32_t result
    long double st0_1
    st0_1, result =
        sub_465dd0(fconvert.s(fconvert.t(var_60)), fconvert.s(float.t(0)), fconvert.s(float.t(1)))
    var_60 = fconvert.s(st0_1)
    long double x87_r7_19 = fconvert.t(var_60)
    ebx[0x10e24] = fconvert.s(x87_r7_19)
    long double x87_r6_5 = float.t(0)
    x87_r6_5 - x87_r7_19
    result.w = (x87_r6_5 < x87_r7_19 ? 1 : 0) << 8
        | (is_unordered.t(x87_r6_5, x87_r7_19) ? 1 : 0) << 0xa | (x87_r6_5 == x87_r7_19 ? 1 : 0) << 0xe
        | 0x3000
    bool p = unimplemented  {test ah, 0x44}
    
    if (p)
        void* eax_36 = ebx[0x2ffa] - 1
        var_60 = fconvert.s(fconvert.t(-1f))
        
        switch (eax_36)
            case nullptr, 5
                if (ebx[0x2ff9].b != 0 && *(ebx + 0xbfe5) != 0)
                    var_54 = 1
                    eax_36 = sub_426c00(&var_54)
                    goto label_440217
            case 2
                ebx[0x2ff4]
                eax_36 = sub_418870(*(sub_4185c0() + 0x7c))
                
                if (ebx[0x2ff9].b != 0 && *(ebx + 0xbfe5) != 0)
                    eax_36 = sub_426e90(eax_36)
                    goto label_440217
            case 4
                if (ebx[0x2ff9].b != 0 && *(ebx + 0xbfe5) != 0)
                    var_54 = 3
                    eax_36 = sub_426c00(&var_54)
                label_440217:
                    
                    if (eax_36.b == 0)
                        var_60 = fconvert.s(fconvert.t(10f))
        
        long double x87_r7_22 = float.t(1)
        char var_55_1 = 1
        long double temp0_1 = fconvert.t(ebx[0x10e25])
        x87_r7_22 - temp0_1
        eax_36.w = (x87_r7_22 < temp0_1 ? 1 : 0) << 8
            | (is_unordered.t(x87_r7_22, temp0_1) ? 1 : 0) << 0xa
            | (x87_r7_22 == temp0_1 ? 1 : 0) << 0xe | 0x3800
        bool p_1 = unimplemented  {test ah, 0x41}
        
        if (p_1)
            var_55_1 = 0
        
        var_60 = fconvert.s(fconvert.t(var_60) * fconvert.t(5.0) * fconvert.t(data_8c4d34)
            + fconvert.t(ebx[0x10e25]))
        long double st0_2
        st0_2, result =
            sub_465dd0(fconvert.s(fconvert.t(var_60)), fconvert.s(float.t(0)), fconvert.s(x87_r7_22))
        var_60 = fconvert.s(st0_2)
        long double x87_r7_26 = fconvert.t(var_60)
        ebx[0x10e25] = fconvert.s(x87_r7_26)
        long double x87_r6_10 = float.t(1)
        x87_r6_10 - x87_r7_26
        result.w = (x87_r6_10 < x87_r7_26 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_10, x87_r7_26) ? 1 : 0) << 0xa
            | (x87_r6_10 == x87_r7_26 ? 1 : 0) << 0xe
        bool p_2 = unimplemented  {test ah, 0x44}
        
        if (not(p_2) && var_55_1 == 0)
            sub_4d6480(data_307bf24)
            void var_4c
            result = sub_4d66f0(&var_4c)
    else
        ebx[0x10e25] = fconvert.s(x87_r7_19)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    sub_5a6aba(eax_2 ^ &var_64)
    return result
}
