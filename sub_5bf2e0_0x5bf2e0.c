// 函数名称: sub_5bf2e0
// 虚拟地址: 0x5bf2e0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_5bf2e0(int128_t* arg1, int16_t arg2, int32_t arg3, int32_t* arg4)
{
    // 第一条实际指令: int32_t edi
    int32_t edi
    edi.w = arg2
    
    if (edi.w == 0)
        return 0
    
    int32_t eax_2 = arg3 & 0x1800
    int32_t ebx
    
    if (eax_2 == 0)
        ebx = 0
    else if (eax_2 == 0x800)
        ebx = 2
    else
        if (eax_2 != 0x1000)
            zip_error_set(arg4, 0x12, 0)
            return 0
        
        ebx = 4
    
    int32_t* result = sub_5a881a(0x14)
    
    if (result == 0)
        zip_error_set(arg4, 0xe, result)
        return 0
    
    uint32_t edi_1 = zx.d(edi.w)
    int128_t* eax_6 = sub_5a881a(edi_1 + 1)
    *result = eax_6
    
    if (eax_6 == 0)
        __free_base(result)
        return 0
    
    sub_5ab990(eax_6, arg1, edi_1)
    *(edi_1 + *result) = 0
    result[1].w = arg2
    result[2] = 0
    result[3] = 0
    result[4] = 0
    
    if (ebx != 0 && sub_5c3620(result, ebx) == 5)
        sub_5bf1f0(result)
        zip_error_set(arg4, 0x12, 0)
        return 0
    
    return result
}
