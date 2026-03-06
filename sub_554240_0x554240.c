// 函数名称: sub_554240
// 虚拟地址: 0x554240
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_554240(char* arg1, char arg2, int32_t arg3)
{
    // 第一条实际指令: if (arg3 - 1 u> 0x14)
    if (arg3 - 1 u> 0x14)
        sub_4c5870("Halt", &data_83f3d3, "ImageUtils.cpp", 0x13d, "ImagePixelToRgba")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_4c5a30()
        noreturn
    
    char var_8
    int32_t ecx
    char edx
    
    switch (arg3)
        case 1
            edx = *arg1
            var_8 = arg1[2]
        label_554267:
            char var_6 = edx
            char var_5 = arg1[3]
            char var_7_1 = arg1[1]
            return var_8.d
        case 2
            edx = arg1[2]
            var_8 = *arg1
            goto label_554267
        case 3
            return *arg1
        case 4, 5
            ecx.b = arg1[2]
            arg2 = *arg1
        label_554296:
            arg1.b = arg1[1]
            char var_6_1 = arg2
            char var_7_2 = arg1.b
            char var_5_1 = 0xff
            return ecx.b.d
        case 6
            uint32_t ecx_6 = zx.d(arg1[1])
            uint32_t eax_4 = zx.d(*arg1)
            uint8_t ecx_7 = ecx_6.b & 0xf
            uint8_t var_c = eax_4.b & 0xf
            uint8_t ebx_1 = (eax_4 u>> 4).b
            uint8_t var_6_3 = var_c << 4 | var_c
            uint8_t edx_5 = (ecx_6 u>> 4).b
            uint8_t var_7_4 = ebx_1 << 4 | ebx_1
            uint8_t var_5_3 = edx_5 << 4 | edx_5
            return (ecx_7 << 4 | ecx_7).d
        case 7
            uint32_t ecx_8 = zx.d(*arg1)
            int32_t eax_8 = ecx_8 & 0x8000
            char eax_9 = (neg.d(eax_8)).b
            int32_t ecx_10 = ecx_8 u>> 0xa & 0x1f
            int32_t ebx_2 = ecx_10
            ecx_10.b *= 2
            ecx_10.b *= 2
            ecx_10.b *= 2
            int32_t esi_1 = ecx_8 & 0x1f
            int32_t ecx_11
            ecx_11.b = esi_1.b * 2
            ecx_11.b *= 2
            int32_t edx_8 = ecx_8 u>> 5 & 0x1f
            ecx_11.b *= 2
            int32_t ecx_12 = edx_8
            edx_8.b *= 2
            edx_8.b *= 2
            edx_8.b *= 2
            uint8_t var_6_4 = (esi_1 u>> 2).b | ecx_11.b
            char var_5_4 = sbb.b(eax_9, eax_9, eax_8 != 0)
            uint8_t var_7_5 = (ecx_12 u>> 2).b | edx_8.b
            int32_t var_c_1 = esi_1
            return ((ebx_2 u>> 2).b | ecx_10.b).d
        case 8
            uint32_t esi_2 = zx.d(*arg1)
            int32_t eax_13 = esi_2 u>> 0xa & 0x1f
            int32_t ebx_6 = eax_13
            eax_13.b *= 2
            eax_13.b *= 2
            eax_13.b *= 2
            int32_t esi_3 = esi_2 & 0x1f
            int32_t edx_9
            edx_9.b = esi_3.b * 2
            edx_9.b *= 2
            int32_t ecx_16 = esi_2 u>> 5 & 0x1f
            edx_9.b *= 2
            int32_t edx_10 = ecx_16
            ecx_16.b *= 2
            ecx_16.b *= 2
            ecx_16.b *= 2
            uint8_t var_6_5 = (esi_3 u>> 2).b | edx_9.b
            uint8_t var_7_6 = (edx_10 u>> 2).b | ecx_16.b
            char var_5_5 = 0xff
            return ((ebx_6 u>> 2).b | eax_13.b).d
        case 9
            uint32_t esi_4 = zx.d(*arg1)
            uint32_t ecx_18 = esi_4 u>> 0xb
            uint32_t ebx_8 = ecx_18
            ecx_18.b *= 2
            ecx_18.b *= 2
            ecx_18.b *= 2
            int32_t esi_5 = esi_4 & 0x1f
            int32_t edx_12
            edx_12.b = esi_5.b * 2
            edx_12.b *= 2
            int32_t eax_19 = esi_4 u>> 5 & 0x2f
            edx_12.b *= 2
            int32_t edx_13 = eax_19
            eax_19.b *= 2
            eax_19.b *= 2
            uint8_t var_6_6 = (esi_5 u>> 2).b | edx_12.b
            uint8_t var_7_7 = (edx_13 u>> 4).b | eax_19.b
            char var_5_6 = 0xff
            return ((ebx_8 u>> 2).b | ecx_18.b).d
        case 0xa
            ecx.b = 0xff
            ecx.b = *arg1
            char var_7
            var_7.w = 0xffff
            char var_5_7 = ecx.b
            return 0xff.d
        case 0xb, 0x14
            ecx.b = *arg1
            arg2 = arg1[2]
            goto label_554296
        case 0xc, 0xd, 0xe, 0xf, 0x10, 0x11, 0x12, 0x15
            sub_4c5870("Halt", &data_83f3d3, "ImageUtils.cpp", 0x13a, "ImagePixelToRgba")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        case 0x13
            char var_6_2 = arg1[3]
            char var_5_2 = *arg1
            char var_7_3 = arg1[2]
            return arg1[1].d
}
