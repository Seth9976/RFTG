// 函数名称: sub_4abcd0
// 虚拟地址: 0x4abcd0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_4abcd0(int32_t arg1, int32_t* arg2, char* arg3, int32_t arg4, int32_t arg5, int32_t arg6)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t* esi = arg2
    int32_t* ecx_1 = &esi[arg3 * 0x2d + 8]
    char* edi = &esi[arg4 * 5 + 0x119]
    int32_t* var_440 = esi
    char* var_434 = edi
    int32_t eax_4
    int32_t ecx_2
    
    if (esi[6].b == 0)
        eax_4, ecx_2 = sub_49ca40(esi)
    else
        eax_4, ecx_2 = sub_49cb90(esi)
    
    if (eax_4 != 0xffffffff)
        int32_t var_45c_1 = 4
        sub_49cc30(esi, eax_4, ecx_2, sx.d(*edi))
        esi[eax_4 * 5 + 0x11c].w = arg4.w
        edi[0xe] += 1
        
        if (esi[6].b == 0)
            sub_49bd10(sx.d(*edi))
    
    void* ecx_4 = *(edi + 8)
    eax_4.w = sx.w(*(ecx_4 + 0xe))
    eax_4.w <<= 0xd
    eax_4.w |= *(edi + 4) & 0x1fff
    *(edi + 4) = eax_4.w
    int32_t i
    int32_t i_3
    char var_410[0x404]
    int32_t i_2
    
    if (*(ecx_4 + 0xe) != 1)
        i_2 = i_3
    label_4abf3d:
        
        if (esi[6].b == 0)
            int32_t var_45c_4 = **(edi + 8)
            int32_t var_460_3 = *ecx_1
            sub_5a733b(&var_410, "%s produces on %s.\n")
            sub_4c5680(&var_410)
            sub_4592e0(sx.d(*(esi + 0x1ec2)), arg3, i_2)
        
        i = *(edi + 8)
        int32_t ebx_2 = 0
        int32_t i_1 = 0
        
        if (*(i + 0x15) s> 0)
            int32_t var_43c = 0
            
            do
                void** ecx_19 = *(edi + 8)
                void* edx_13 = *ecx_19
                
                if (*(ebx_2 + ecx_19 + 0x18) == 5)
                    if ((*(ebx_2 + ecx_19 + 0x20) & 0x200) != 0)
                        sub_49cf20(esi, arg3, sx.d(*(ebx_2 + ecx_19 + 0x28)), edx_13)
                        esi = var_440
                        edi = var_434
                        ecx_1[0x26].w += sx.w(*(ebx_2 + ecx_19 + 0x28))
                    
                    int32_t eax_31 = *(ebx_2 + ecx_19 + 0x20) & 0x400
                    
                    if (eax_31 != 0)
                        *(ebx_2 + ecx_19 + 0x28)
                        sub_49d110(eax_31, arg3, edx_13, esi, arg3)
                        int16_t ecx_22 = sx.w(*(ebx_2 + ecx_19 + 0x28))
                        ebx_2 = var_43c
                        edi = var_434
                        ecx_1[0x27].w += ecx_22
                
                i = i_1 + 1
                ebx_2 += 0x18
                i_1 = i
                var_43c = ebx_2
            while (i s< sx.d(*(*(edi + 8) + 0x15)))
    else
        char* edx_4
        
        if (arg5 s>= 0)
            edx_4 = esi[arg5 * 5 + 0x11b] + ((arg6 * 3 + 3) << 3)
        else
            char var_428 = 5
            int32_t var_420_1 = 2
            int32_t var_41c_1 = 0
            edx_4 = &var_428
        
        if ((*(edx_4 + 8) & 4) == 0)
            i_2 = i_3
        else
            i_2 = 2
            *(edi + 4) = (eax_4.w & 0x1fff) | 0x4000
        
        if ((*(edx_4 + 8) & 8) != 0)
            int32_t eax_11
            eax_11.w = *(edi + 4)
            i_2 = 3
            eax_11.w &= 0x1fff
            eax_11.w |= 0x6000
            *(edi + 4) = eax_11.w
        
        if ((*(edx_4 + 8) & 0x10) != 0)
            int32_t eax_14
            eax_14.w = *(edi + 4)
            i_2 = 4
            eax_14.w &= 0x1fff
            eax_14.w |= 0x8000
            *(edi + 4) = eax_14.w
        
        if ((*(edx_4 + 8) & 0x20) != 0)
            int32_t eax_17
            eax_17.w = *(edi + 4)
            i_2 = 5
            eax_17.w &= 0x1fff
            eax_17.w |= 0xa000
            *(edi + 4) = eax_17.w
        
        if ((*(edx_4 + 8) & 2) == 0)
            goto label_4abf3d
        
        int32_t ecx_11
        i, ecx_11 = sub_49d9e0(esi, arg3, 0x18, nullptr, nullptr, 0, nullptr, 1, 0, 0, 0)
        i_2 = i
        
        if (*(esi + 0x1ec3) == 0)
            ecx_11.w = *(var_434 + 4)
            ecx_11.w &= 0x1fff
            *(var_434 + 4) = (i_2 << 0xd).w | ecx_11.w
            esi[0x7ad].b = i_2.b
            
            if (esi[6].b == 0)
                int32_t var_45c_3 = (&data_8c6740)[i_2]
                int32_t var_460_2 = *ecx_1
                sub_5a733b(&var_410, "%s changes Alien Oort Cloud Refinery's kind to %s.\n")
                char const* const var_46c_1 = "verbose"
                char (* var_470_1)[0x404] = &var_410
                ecx_11 = sub_4c5680("%s (%s)")
            
            sub_4ae7d0(ecx_11, arg3, 0xd, esi)
            esi[0x7ad].b = 1
            edi = var_434
            goto label_4abf3d
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return i
}
