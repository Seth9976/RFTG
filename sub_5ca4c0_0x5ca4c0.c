// 函数名称: sub_5ca4c0
// 虚拟地址: 0x5ca4c0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_5ca4c0(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t* arg5)
{
    // 第一条实际指令: int32_t var_8 = arg3
    int32_t var_8 = arg3
    int32_t eax = sub_5ca2e0("glGetIntegerv")
    
    if (eax == 0)
        return 0xffffffff
    
    int32_t eax_2 = sub_5ca2e0("glGetError")
    
    if (eax_2 == 0)
        return 0xffffffff
    
    int32_t ebx
    int32_t var_14 = ebx
    *arg5 = 0
    
    if (arg4 u> 0x17)
        sub_5cce60("Unknown OpenGL attribute")
        return 0xffffffff
    
    int32_t eax_5
    
    switch (arg4)
        case 0
            eax_5 = 0xd52
        label_5ca57c:
            eax(eax_5, arg5)
            int32_t eax_6 = eax_2()
            
            if (eax_6 == 0)
                return 0
            
            if (eax_6 == 0x500)
                sub_5cce60("OpenGL error: GL_INVALID_ENUM")
                return 0xffffffff
            
            if (eax_6 == 0x501)
                sub_5cce60("OpenGL error: GL_INVALID_VALUE")
                return 0xffffffff
            
            int32_t var_18_2 = eax_6
            sub_5cce60("OpenGL error: %08X")
            return 0xffffffff
        case 1
            eax_5 = 0xd53
            goto label_5ca57c
        case 2
            eax_5 = 0xd54
            goto label_5ca57c
        case 3
            eax_5 = 0xd55
            goto label_5ca57c
        case 4
            eax(0xd52, &var_8)
            int32_t esi_1 = var_8
            eax(0xd53, &var_8)
            int32_t esi_2 = esi_1 + var_8
            eax(0xd54, &var_8)
            int32_t esi_3 = esi_2 + var_8
            eax(0xd55, &var_8)
            *arg5 = var_8 + esi_3
            return 0
        case 5
            eax_5 = 0xc32
            goto label_5ca57c
        case 6
            eax_5 = 0xd56
            goto label_5ca57c
        case 7
            eax_5 = 0xd57
            goto label_5ca57c
        case 8
            eax_5 = 0xd58
            goto label_5ca57c
        case 9
            eax_5 = 0xd59
            goto label_5ca57c
        case 0xa
            eax_5 = 0xd5a
            goto label_5ca57c
        case 0xb
            eax_5 = 0xd5b
            goto label_5ca57c
        case 0xc
            eax_5 = 0xc33
            goto label_5ca57c
        case 0xd
            eax_5 = 0x80a8
            goto label_5ca57c
        case 0xe
            eax_5 = 0x80a9
            goto label_5ca57c
        case 0xf
            int32_t edx
            edx.b = *(data_bed820 + 0x13c) != 0
            *arg5 = edx
            return 0
        case 0x10
            *arg5 = *(data_bed820 + 0x158)
            return 0
        case 0x11
            *arg5 = *(data_bed820 + 0x140)
            return 0
        case 0x12
            *arg5 = *(data_bed820 + 0x144)
            return 0
        case 0x13
            int32_t ecx_4
            ecx_4.b = *(data_bed820 + 0x14c) == 4
            *arg5 = ecx_4
            return 0
        case 0x14
            *arg5 = *(data_bed820 + 0x148)
            return 0
        case 0x15
            *arg5 = *(data_bed820 + 0x14c)
            return 0
        case 0x16
            *arg5 = *(data_bed820 + 0x150)
            return 0
        case 0x17
            *arg5 = *(data_bed820 + 0x154)
            return 0
}
