// 函数名称: sub_603370
// 虚拟地址: 0x603370
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

HRGNsub_603370(HRGN arg1, int32_t* arg2)
{
    // 第一条实际指令: HRGN result = arg1
    HRGN result = arg1
    HRGN esi = *arg2
    
    if (result->unused == 2)
        int32_t y1 = result
        int32_t x1 = result
        result = CreateRectRgn(x1, y1, result + x1 + 1, result + y1 + 1)
        HGDIOBJ result_1 = result
        
        if (esi != 0)
            CombineRgn(esi, esi, result_1, RGN_OR)
            return DeleteObject(result_1)
        
        *arg2 = result_1
    
    return result
}
