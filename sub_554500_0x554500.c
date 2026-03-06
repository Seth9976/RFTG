// 函数名称: sub_554500
// 虚拟地址: 0x554500
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint8_t __convention("regparm")sub_554500(int32_t arg1, int32_t arg2, uint8_t* arg3, int32_t arg4)
{
    // 第一条实际指令: if (arg1 - 1 u> 0x14)
    if (arg1 - 1 u> 0x14)
        sub_4c5870("Halt", &data_83f3d3, "ImageUtils.cpp", 0x1a2, "ImageRgbaToPixel")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_4c5a30()
        noreturn
    
    int32_t eax_12
    uint16_t edx_30
    int32_t ebx
    uint16_t esi_1
    
    switch (arg1)
        case 1, 4
            *arg3 = (arg4 u>> 0x10).b
            arg3[2] = arg4.b
            uint8_t eax_2 = (arg4 u>> 0x18).b
            arg3[1] = (arg4 u>> 8).b
            arg3[3] = eax_2
            return eax_2
        case 2
            arg3[1] = (arg4 u>> 8).b
            *arg3 = arg4.b
            uint8_t eax_5 = (arg4 u>> 0x18).b
            arg3[2] = (arg4 u>> 0x10).b
            arg3[3] = eax_5
            return eax_5
        case 3
            *arg3 = (arg4 u>> 0x18).b
            arg3[1] = (arg4 u>> 0x10).b
            arg3[2] = (arg4 u>> 8).b
            arg3[3] = arg4.b
            return arg4
        case 5
            *arg3 = (arg4 u>> 0x10).b
            arg3[1] = (arg4 u>> 8).b
            arg3[2] = arg4.b
            return arg4
        case 6
            *arg3 = (arg4 u>> 8).b << 4 | (arg4 u>> 0x10).b
            arg3[1] = (arg4 u>> 0x18).b << 4 | arg4.b
            return arg4
        case 7
            eax_12 = arg4
            ebx.b = eax_12.b
            ebx.b u>>= 3
            edx_30 = (zx.w((eax_12 u>> 0x18).b u>> 7) << 5 | zx.w(ebx.b)) << 5
            esi_1 = zx.w((eax_12 u>> 8).b u>> 3)
        label_55461e:
            uint16_t eax_14 = zx.w((eax_12 u>> 0x10).b u>> 3)
            *arg3 = (edx_30 | esi_1) << 5 | eax_14
            return eax_14
        case 8
            eax_12 = arg4
            ebx.b = eax_12.b
            ebx.b u>>= 3
            edx_30 = zx.w((eax_12 u>> 8).b u>> 3)
            esi_1 = zx.w(ebx.b) << 5
            goto label_55461e
        case 9
            eax_12 = arg4
            ebx.b = eax_12.b
            ebx.b u>>= 3
            edx_30 = zx.w((eax_12 u>> 8).b u>> 2)
            esi_1 = zx.w(ebx.b) << 6
            goto label_55461e
        case 0xa
            *arg3 = (arg4 u>> 0x18).b
            return arg1 - 1
        case 0xb
            uint8_t eax_17 = (arg4 u>> 8).b
            *arg3 = (arg4 u>> 0x10).b u/ 3 + eax_17 + arg4.b
            return eax_17
        case 0xc, 0xd, 0xe, 0xf, 0x10, 0x11, 0x12, 0x15
            sub_4c5870("Halt", &data_83f3d3, "ImageUtils.cpp", 0x19f, "ImageRgbaToPixel")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        case 0x13
            *arg3 = (arg4 u>> 0x18).b
            arg3[1] = arg4.b
            uint8_t eax_10 = (arg4 u>> 0x10).b
            arg3[2] = (arg4 u>> 8).b
            arg3[3] = eax_10
            return eax_10
        case 0x14
            *arg3 = arg4.b
            uint8_t eax_8 = (arg4 u>> 0x10).b
            arg3[1] = (arg4 u>> 8).b
            arg3[2] = eax_8
            return eax_8
}
