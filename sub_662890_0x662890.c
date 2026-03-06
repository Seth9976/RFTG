// 函数名称: sub_662890
// 虚拟地址: 0x662890
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_tsub_662890(void* arg1, int32_t arg2, int32_t arg3, int32_t arg4, uint32_t arg5, int32_t arg6, int32_t arg7, int32_t arg8)
{
    // 第一条实际指令: int32_t edi = 0
    int32_t edi = 0
    
    if (arg2 == 0)
        sub_664100(arg1, "Image width is zero in IHDR")
        edi = 1
    
    if (arg3 == 0)
        sub_664100(arg1, "Image height is zero in IHDR")
        edi = arg3 + 1
    
    if (arg2 u> *(arg1 + 0x280))
        sub_664100(arg1, "Image width exceeds user limit in IHDR")
        edi = 1
    
    if (arg3 u> *(arg1 + 0x284))
        sub_664100(arg1, "Image height exceeds user limit in IHDR")
        edi = 1
    
    if (arg2 u> 0x7fffffff)
        sub_664100(arg1, "Invalid image width in IHDR")
        edi = 1
    
    if (arg3 u> 0x7fffffff)
        sub_664100(arg1, "Invalid image height in IHDR")
        edi = 1
    
    if (arg2 u> 0x1fffff8e)
        sub_664100(arg1, "Width is too large for libpng to process pixels")
    
    if (arg4 != 1 && arg4 != 2 && arg4 != 4 && arg4 != 8 && arg4 != 0x10)
        sub_664100(arg1, "Invalid bit depth in IHDR")
        edi = 1
    
    uint32_t result = arg5
    
    if (result s< 0 || result == 1 || result == 5 || result s> 6)
        sub_664100(arg1, "Invalid color type in IHDR")
        result = arg5
        edi = 1
    
    if (result != 3)
        if ((result == 2 || result == 4 || result == 6) && arg4 s< 8)
            goto label_6629d3
    else if (arg4 s> 8)
    label_6629d3:
        sub_664100(arg1, "Invalid color type/bit depth combination in IHDR")
        result = arg5
        edi = 1
    
    if (arg6 s>= 2)
        sub_664100(arg1, "Unknown interlace method in IHDR")
        result = arg5
        edi = 1
    
    if (arg7 != 0)
        sub_664100(arg1, "Unknown compression method in IHDR")
        result = arg5
        edi = 1
    
    if ((*(arg1 + 0x6c) & 0x1000) != 0 && *(arg1 + 0x258) != 0)
        sub_664100(arg1, "MNG features are not allowed in a PNG datastream")
        result = arg5
    
    if (arg8 == 0)
    label_662a8b:
        
        if (edi != 1)
            return result
    else
        if ((*(arg1 + 0x258) & 4) == 0 || arg8 != 0x40 || (*(arg1 + 0x6c) & 0x1000) != 0)
            result = sub_664100(arg1, "Unknown filter method in IHDR")
            edi = 1
        else if (result != 2 && result != 6)
            result = sub_664100(arg1, "Unknown filter method in IHDR")
            edi = 1
        
        if ((*(arg1 + 0x6c) & 0x1000) == 0)
            goto label_662a8b
        
        sub_664100(arg1, "Invalid filter method in IHDR")
    
    sub_664320(arg1, "Invalid IHDR data")
    noreturn
}
