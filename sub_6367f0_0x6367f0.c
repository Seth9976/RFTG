// 函数名称: sub_6367f0
// 虚拟地址: 0x6367f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_6367f0(void* arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: void* eax = arg1
    void* eax = arg1
    
    if (eax == 0)
        sub_5cce60("Passed NULL destination surface")
        return 0xffffffff
    
    if (*(*(eax + 4) + 8) u< 8)
        sub_5cce60("SDL_DrawPoints(): Unsupported surface format")
        return 0xffffffff
    
    void* esi = *(eax + 0x24)
    void* ecx_1 = *(eax + 0x2c) + esi - 1
    int32_t ecx_2 = *(eax + 0x28)
    int32_t edi = 0
    int32_t ecx_3 = *(eax + 0x30) + ecx_2 - 1
    arg1 = esi
    
    if (arg3 s> 0)
        while (true)
            int32_t ecx_4 = *(arg2 + (edi << 3))
            int32_t edx_3 = *(arg2 + (edi << 3) + 4)
            
            if (ecx_4 s>= esi && ecx_4 s<= ecx_1 && edx_3 s>= ecx_2 && edx_3 s<= ecx_3)
                switch (zx.d(*(*(eax + 4) + 9)) - 1)
                    case 0
                        (*(eax + 0x10) * edx_3 + *(eax + 0x14))[ecx_4] = arg4.b
                    case 1
                        *(*(eax + 0x10) * edx_3 + (ecx_4 << 1) + *(eax + 0x14)) = arg4.w
                    case 2
                        sub_5cd050(4)
                        return 0xffffffff
                    case 3
                        *(*(eax + 0x10) * edx_3 + (ecx_4 << 2) + *(eax + 0x14)) = arg4
            
            edi += 1
            
            if (edi s>= arg3)
                break
            
            esi = arg1
    
    return 0
}
