// 函数名称: sub_681740
// 虚拟地址: 0x681740
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int128_t*sub_681740(void* arg1, int32_t arg2, int128_t* arg3, int32_t arg4, int32_t* arg5, int32_t arg6)
{
    // 第一条实际指令: void* esi = *(arg1 + 0x1c4)
    void* esi = *(arg1 + 0x1c4)
    int128_t* result
    int32_t* ebx
    int32_t edi
    
    if (*(esi + 0x24) == 0)
        int32_t eax_2 = *(esi + 0x2c)
        edi = 2
        
        if (eax_2 u< 2)
            edi = eax_2
        
        ebx = arg5
        int32_t eax_3 = *ebx
        int32_t ecx_3 = arg6 - eax_3
        
        if (edi u> ecx_3)
            edi = ecx_3
        
        int32_t var_c = *(arg4 + (eax_3 << 2))
        
        if (edi u<= 1)
            int32_t var_8_2 = *(esi + 0x20)
            *(esi + 0x24) = 1
        else
            int32_t var_8_1 = *(arg4 + (eax_3 << 2) + 4)
        
        result = (*(esi + 0xc))(arg1, arg2, *arg3, &var_c)
    else
        ebx = arg5
        result = sub_67d1b0(esi + 0x20, 0, arg4 + (*ebx << 2), 0, 1, *(esi + 0x28))
        edi = 1
        *(esi + 0x24) = 0
    
    *ebx += edi
    *(esi + 0x2c) -= edi
    
    if (*(esi + 0x24) == 0)
        result = arg3
        *result += 1
    
    return result
}
