// 函数名称: sub_60af80
// 虚拟地址: 0x60af80
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_60af80(int32_t arg1, void* arg2)
{
    // 第一条实际指令: void* esi = *(arg1 + 0x134)
    void* esi = *(arg1 + 0x134)
    sub_609b10(arg1)
    
    if (arg2 != 0)
        int32_t edi
        int32_t var_c_1 = edi
        int32_t* edi_1 = *(arg2 + 0x44)
        (*(esi + 0xf8))(0x8d40, *(edi_1[0xf] + 8))
        (*(esi + 0xf4))(0x8d40, 0x8ce0, edi_1[1], *edi_1, 0)
        
        if ((*(esi + 0xfc))(0x8d40) != 0x8cd5)
            sub_5cce60("glFramebufferTexture2DEXT() failed")
            return 0xffffffff
    else
        (*(esi + 0xf8))(0x8d40, arg2)
    
    return 0
}
