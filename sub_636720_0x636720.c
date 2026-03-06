// 函数名称: sub_636720
// 虚拟地址: 0x636720
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_636720(void* arg1, int32_t arg2, int32_t arg3, char arg4)
{
    // 第一条实际指令: if (arg1 == 0)
    if (arg1 == 0)
        sub_5cce60("Passed NULL destination surface")
        return 0xffffffff
    
    if (*(*(arg1 + 4) + 8) u< 8)
        sub_5cce60("SDL_DrawPoint(): Unsupported surface format")
        return 0xffffffff
    
    int32_t edi = *(arg1 + 0x24)
    
    if (arg2 s>= edi)
        int32_t esi_1 = *(arg1 + 0x28)
        
        if (arg3 s>= esi_1 && arg2 s< *(arg1 + 0x2c) + edi && arg3 s< *(arg1 + 0x30) + esi_1)
            switch (zx.d(*(*(arg1 + 4) + 9)) - 1)
                case 0
                    void* eax
                    eax.b = arg4
                    (*(arg1 + 0x10) * arg3 + *(arg1 + 0x14))[arg2] = eax.b
                case 1
                    int32_t ecx_1
                    ecx_1.w = arg4.w
                    *(*(arg1 + 0x10) * arg3 + *(arg1 + 0x14) + (arg2 << 1)) = ecx_1.w
                case 2
                    sub_5cd050(4)
                    return 0xffffffff
                case 3
                    *(*(arg1 + 0x10) * arg3 + *(arg1 + 0x14) + (arg2 << 2)) = arg4.d
    
    return 0
}
