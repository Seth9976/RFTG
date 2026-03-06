// 函数名称: sub_636400
// 虚拟地址: 0x636400
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_636400(int32_t* arg1, int32_t arg2, int32_t arg3, int32_t arg4, uint8_t arg5, uint8_t arg6, uint8_t arg7, char arg8)
{
    // 第一条实际指令: if (arg1 == 0)
    if (arg1 == 0)
        sub_5cce60("Passed NULL destination surface")
        return 0xffffffff
    
    if (*(arg1[1] + 8) u< 8)
        sub_5cce60("SDL_BlendPoint(): Unsupported surface format")
        return 0xffffffff
    
    int32_t eax_1 = arg2
    int32_t esi = arg1[9]
    
    if (eax_1 s>= esi)
        int32_t edx_1 = arg1[0xa]
        
        if (arg3 s>= edx_1 && eax_1 s< arg1[0xb] + esi && arg3 s< arg1[0xc] + edx_1)
            if (arg4 == 1 || arg4 == 2)
                arg5 = (zx.d(arg5) * zx.d(arg8) u/ 0xff).b
                arg6 = (zx.d(arg6) * zx.d(arg8) u/ 0xff).b
                eax_1 = arg2
                arg7 = (zx.d(arg7) * zx.d(arg8) u/ 0xff).b
            
            uint32_t edx_15 = zx.d(*(arg1[1] + 8))
            
            if (edx_15 == 0xf)
                if (*(arg1[1] + 0xc) == 0x7c00)
                    sub_6351c0(arg1, eax_1, arg3, arg4, arg5, arg6, arg7, arg8)
                    return 0
            else if (edx_15 == 0x10)
                if (*(arg1[1] + 0xc) == 0xf800)
                    sub_635420(arg1, eax_1, arg3, arg4, arg5, arg6, arg7, arg8)
                    return 0
            else if (edx_15 == 0x20)
                void* edx_19 = arg1[1]
                
                if (*(edx_19 + 0xc) == 0xff0000)
                    if (*(edx_19 + 0x18) != 0)
                        sub_635810(arg1, eax_1, arg3, arg4, arg5, arg6, arg7, arg8)
                        return 0
                    
                    sub_635680(arg1, eax_1, arg3, arg4, arg5, arg6, arg7, arg8)
                    return 0
            
            if (*(arg1[1] + 0x18) != 0)
                return sub_636020(arg1, eax_1, arg3, arg4, arg5, arg6, arg7, arg8)
            
            return sub_6359d0(arg1, eax_1, arg3, arg4, arg5, arg6, arg7, arg8)
    
    return 0
}
