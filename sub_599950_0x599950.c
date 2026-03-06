// 函数名称: sub_599950
// 虚拟地址: 0x599950
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __fastcallsub_599950(int32_t* arg1)
{
    // 第一条实际指令: char* eax = *arg1
    char* eax = *arg1
    int32_t ebx = arg1[1]
    uint32_t edi
    
    if (eax u< ebx)
        char edx = *eax
        *arg1 = &eax[1]
        edi = zx.d(edx)
    else
        edi = 0
    
    char* edx_1 = *arg1
    uint32_t ecx
    
    if (edx_1 u< ebx)
        eax.b = *edx_1
        *arg1 = &edx_1[1]
        ecx = zx.d(eax.b)
    else
        ecx = 0
    
    if (mods.dp.d(sx.q((edi << 8) + ecx), 0x1f) != 0)
        data_273ac1c = "bad zlib header"
        return 0
    
    if ((ecx.b & 0x20) != 0)
        data_273ac1c = "no preset dict"
        return 0
    
    if ((edi & 0xf) == 8)
        return 1
    
    data_273ac1c = "bad compression"
    return 0
}
