// 函数名称: sub_60d940
// 虚拟地址: 0x60d940
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __fastcallsub_60d940(int32_t arg1)
{
    // 第一条实际指令: int32_t var_8 = arg1
    int32_t var_8 = arg1
    int32_t arg_4
    int32_t ebx = arg_4
    void* esi = *(ebx + 0x134)
    
    if (*(esi + 0x48) != 0)
        int32_t* edi_1 = *(ebx + 0xbc)
        sub_5c9bb0(edi_1, &arg_4, &var_8)
        int32_t eax_1 = var_8
        *(esi + 0x10) = arg_4
        *(esi + 0x14) = eax_1
        
        if ((sub_5c9760(edi_1) & 1) == 0)
            *(esi + 0x18) = 0
        else
            *(esi + 0x18) = sub_60ca70(sub_5c9660(edi_1))
        
        if (sub_60d8c0(ebx) s< 0)
            return 0xffffffff
        
        *(esi + 0x48) = 0
    
    if (*(esi + 0x4c) == 0)
        return 0
    
    int32_t* eax_7 = *(esi + 8)
    int32_t eax_8
    int32_t edx_3
    eax_8, edx_3 = (*(*eax_7 + 0xa4))(eax_7)
    
    if (eax_8 == 0x88760868)
        if (sub_60d8c0(ebx) s< 0)
            return 0xffffffff
        
        int32_t* eax_10 = *(esi + 8)
        eax_8, edx_3 = (*(*eax_10 + 0xa4))(eax_10)
    
    if (eax_8 s>= 0)
        *(esi + 0x4c) = 0
        return 0
    
    char const* const __saved_edi_4 = "BeginScene()"
    sub_60c740(eax_8, edx_3)
    return 0xffffffff
}
