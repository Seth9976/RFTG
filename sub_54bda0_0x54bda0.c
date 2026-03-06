// 函数名称: sub_54bda0
// 虚拟地址: 0x54bda0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_54bda0(int32_t arg1, int32_t arg2, void* arg3, int32_t* arg4 @ edi, void* arg5, float arg6, float arg7, float arg8)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t ebx = 0
    int32_t* eax_3 = arg4
    int32_t var_60 = 0
    int32_t var_50[0x2]
    int32_t (* esi)[0x2] = &var_50
    int32_t* var_5c = eax_3
    float var_70
    int32_t var_6c
    float var_58
    int32_t var_54
    float arg_8
    
    while (true)
        if (sub_54ba70(&var_58, &var_70, arg_8, arg6, arg7, arg8, *eax_3, eax_3[1], eax_3[2], eax_3[3])
                == 0)
            *esi = var_58
            (*esi)[1] = var_54
            ebx += 1
            esi = &esi[1]
        else
            if (sub_4057a0(&arg_8, &var_58) == 0)
                sub_4c5870("RectContains(rect, p0)", &data_83f3d3, "Clipping2.cpp", 0xa0, "ClipRect")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            if (sub_4057a0(&arg_8, &var_70) == 0)
                sub_4c5870("RectContains(rect, p1)", &data_83f3d3, "Clipping2.cpp", 0xa1, "ClipRect")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            float ecx_5 = var_70
            *esi = var_58
            (*esi)[1] = var_54
            esi[1][0] = ecx_5
            (*esi)[3] = var_6c
            ebx += 2
            esi = &esi[2]
        
        var_5c = &var_5c[2]
        int32_t eax_11 = var_60 + 1
        var_60 = eax_11
        
        if (eax_11 s>= 3)
            break
        
        eax_3 = var_5c
    
    int32_t ebx_1
    var_4c
    
    if (sub_54ba70(&var_58, &var_70, arg_8, arg6, arg7, arg8, arg4[6], arg4[7], *arg4, arg4[1]) == 0)
        (&var_50)[ebx][0] = var_58
        *(&var_4c + (ebx << 3)) = var_54
        ebx_1 = ebx + 1
    else
        float ecx_10 = var_70
        (&var_50)[ebx][0] = var_58
        *(&var_4c + (ebx << 3)) = var_54
        int32_t var_48[0x2]
        (&var_48)[ebx][0] = ecx_10
        var_44
        *(&var_44 + (ebx << 3)) = var_6c
        ebx_1 = ebx + 2
    float var_64 = fconvert.s(fconvert.t(arg4[2]) - fconvert.t(*arg4))
    float var_60_1 = fconvert.s(fconvert.t(arg4[3]) - fconvert.t(arg4[1]))
    var_58 = fconvert.s(fconvert.t(arg4[6]) - fconvert.t(*arg4))
    float var_54_1 = fconvert.s(fconvert.t(arg4[7]) - fconvert.t(arg4[1]))
    
    if (ebx_1 - 1 s> 1)
        float* eax_20 = arg3 - arg5
        void* ebx_3 = arg3 + 0x10
        void var_40
        void* esi_1 = &var_40
        void* ecx_12 = arg5 + 8
        int32_t i_1 = ebx_1 - 2
        int32_t i
        
        do
            float eax_23 = var_50[1]
            *(ecx_12 - 8) = var_50[0]
            *ecx_12 = *(esi_1 - 8)
            *(ecx_12 + 4) = *(esi_1 - 4)
            *(ecx_12 + 8) = *esi_1
            *(ecx_12 + 0xc) = *(esi_1 + 4)
            float edx_20 = var_50[0]
            *(ecx_12 - 4) = eax_23
            *(ecx_12 + 0x14) = eax_23
            *(ecx_12 + 0x10) = edx_20
            float eax_27
            int32_t edx_24
            eax_27, edx_24 =
                sub_54bd10(*arg4, arg4[1], var_64, var_60_1, var_58, var_54_1, edx_20, eax_23)
            *(ebx_3 - 0x10) = eax_27
            float eax_28 = *(esi_1 - 4)
            *(ebx_3 - 0xc) = edx_24
            float eax_32
            int32_t edx_29
            eax_32, edx_29 =
                sub_54bd10(*arg4, arg4[1], var_64, var_60_1, var_58, var_54_1, *(esi_1 - 8), eax_28)
            *(eax_20 + ecx_12) = eax_32
            *(eax_20 + ecx_12 + 4) = edx_29
            float eax_38
            int32_t edx_35
            eax_38, edx_35 =
                sub_54bd10(*arg4, arg4[1], var_64, var_60_1, var_58, var_54_1, *esi_1, *(esi_1 + 4))
            *(ebx_3 + 4) = edx_35
            float edx_36 = var_50[1]
            *ebx_3 = eax_38
            float eax_43
            int32_t edx_40
            eax_43, edx_40 =
                sub_54bd10(*arg4, arg4[1], var_64, var_60_1, var_58, var_54_1, var_50[0], edx_36)
            *(ebx_3 + 8) = eax_43
            *(ebx_3 + 0xc) = edx_40
            esi_1 += 8
            ecx_12 += 0x20
            ebx_3 += 0x20
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return ebx_1 - 2
}
