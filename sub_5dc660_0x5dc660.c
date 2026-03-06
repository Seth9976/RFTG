// 函数名称: sub_5dc660
// 虚拟地址: 0x5dc660
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5dc660(int32_t arg1 @ edi, void* arg2)
{
    // 第一条实际指令: char* esi = sub_5d2340("LC_ALL")
    char* esi = sub_5d2340("LC_ALL")
    
    if (esi != 0)
    label_5dc6b0:
        
        if (*esi == 0)
            esi = "ASCII"
        else
        label_5dc6bb:
            
            if (sub_5cd590(esi, U"C") == 0)
                esi = "ASCII"
    else
        esi = sub_5d2340("LC_CTYPE")
        
        if (esi != 0)
            goto label_5dc6b0
        
        esi = sub_5d2340("LC_MESSAGES")
        
        if (esi != 0)
            goto label_5dc6b0
        
        esi = sub_5d2340("LANG")
        
        if (esi != 0 && *esi != 0)
            goto label_5dc6bb
        
        esi = "ASCII"
    
    int32_t var_c = 0x2e
    char* var_10_2 = esi
    void* eax_5 = sub_5cd400()
    
    if (eax_5 != 0)
        esi = eax_5 + 1
    
    sub_5cd270(arg1, esi, arg2)
    int32_t var_18 = 0x40
    int32_t var_1c = arg1
    char* eax_7 = sub_5cd400()
    
    if (eax_7 != 0)
        *eax_7 = 0
    
    return arg1
}
