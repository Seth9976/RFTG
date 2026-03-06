// 函数名称: sub_6440c0
// 虚拟地址: 0x6440c0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_6440c0(void* arg1, int32_t* arg2, int32_t arg3, int32_t arg4, uint8_t arg5, uint8_t arg6, uint8_t arg7, char arg8)
{
    // 第一条实际指令: int32_t result = 0
    int32_t result = 0
    
    if (arg1 == 0)
        sub_5cce60("Passed NULL destination surface")
        return 0xffffffff
    
    void* edi = *(arg1 + 4)
    int32_t ebx
    ebx.b = *(edi + 8)
    
    if (ebx.b u< 8)
        sub_5cce60("SDL_BlendFillRects(): Unsupported surface format")
        return 0xffffffff
    
    if (arg4 == 1 || arg4 == 2)
        uint32_t ecx_1 = zx.d(arg8)
        arg5 = (zx.d(arg5) * ecx_1 u/ 0xff).b
        arg6 = (zx.d(arg6) * ecx_1 u/ 0xff).b
        arg7 = (zx.d(arg7) * ecx_1 u/ 0xff).b
    
    uint32_t eax_5 = zx.d(ebx.b)
    int32_t (* esi_1)(void* arg1, void* arg2, int32_t arg3, char arg4, char arg5, char arg6, char arg7)
    
    if (eax_5 != 0xf)
        if (eax_5 == 0x10)
            if (*(edi + 0xc) != 0xf800)
                goto label_6441a5
            
            esi_1 = sub_63ffa0
            goto label_64419d
        
        if (eax_5 != 0x20 || *(edi + 0xc) != 0xff0000)
            goto label_6441a5
        
        if (*(edi + 0x18) != eax_5 - 0x20)
            esi_1 = sub_641040
        else
            esi_1 = sub_6409a0
        
        goto label_64419d
    
    if (*(edi + 0xc) != 0x7c00)
    label_6441a5:
        esi_1 = sub_6417a0
        
        if (*(edi + 0x18) != 0)
            esi_1 = sub_643190
    else
        esi_1 = sub_63f580
    label_64419d:
        
        if (esi_1 == 0)
            goto label_6441a5
    
    if (arg3 s> 0)
        int32_t* var_8_1 = arg2
        int32_t i_1 = arg3
        int32_t i
        
        do
            void var_20
            
            if (sub_5d4dd0(var_8_1, arg1 + 0x24, &var_20) != 0)
                result = esi_1(arg1, &var_20, arg4, arg5.d, arg6.d, arg7.d, arg8.d)
            
            var_8_1 = &var_8_1[4]
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    return result
}
