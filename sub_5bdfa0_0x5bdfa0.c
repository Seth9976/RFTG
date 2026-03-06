// 函数名称: sub_5bdfa0
// 虚拟地址: 0x5bdfa0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5bdfa0(int32_t arg1 @ esi)
{
    // 第一条实际指令: int32_t* ecx = __chkstk(0x200c)
    int32_t* ecx = __chkstk(0x200c)
    int32_t __saved_ebp
    int32_t var_8 = __security_cookie ^ &__saved_ebp
    int32_t* entry_ebx
    
    if (zip_source_open(entry_ebx) s< 0)
        sub_5bf050(&ecx[2], entry_ebx)
        sub_5a6aba(arg1 ^ &__saved_ebp)
        return 0xffffffff
    
    int32_t result = 0
    void var_2008
    int32_t eax_4
    int32_t edx
    eax_4, edx = zip_source_read(entry_ebx, &var_2008, 0x2000, 0)
    int32_t esi_3 = edx
    int32_t edi = eax_4
    
    if (esi_3 s< 0)
    label_5be082:
        sub_5bf050(&ecx[2], entry_ebx)
        result = 0xffffffff
    else
        if (esi_3 s> 0 || edi != 0)
            while (true)
                if (sub_5c21e0(ecx, &var_2008, edi, esi_3) s< 0)
                    result = 0xffffffff
                    break
                
                int32_t eax_6
                int32_t edx_2
                eax_6, edx_2 = zip_source_read(entry_ebx, &var_2008, 0x2000, 0)
                esi_3 = edx_2
                edi = eax_6
                
                if (esi_3 s<= 0)
                    if (esi_3 s< 0)
                        goto label_5be082
                    
                    if (edi == 0)
                        break
        
        if (esi_3 s<= 0 && (esi_3 s< 0 || edi u< 0))
            goto label_5be082
    
    zip_source_close(entry_ebx)
    sub_5a6aba(arg1 ^ &__saved_ebp)
    return result
}
