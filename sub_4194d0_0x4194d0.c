// 函数名称: sub_4194d0
// 虚拟地址: 0x4194d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_4194d0(int32_t arg1)
{
    // 第一条实际指令: int32_t edx_2 = data_27e7a40
    int32_t edx_2 = data_27e7a40
    int32_t eax = arg1 * 0x1f8
    
    if (*(eax + edx_2 + 0xcb4) != 2)
        eax.b = 0
        return eax
    
    int32_t edi
    
    if (*(edx_2 + 0x38) == 0)
        edi = *(data_27e7a54 + 0x10)
    else
        edi = *(data_27e7a54 + 0x14)
    
    int32_t esi = *(eax + edx_2 + 0xc18)
    int32_t eax_2 = 0
    
    if (esi s> 0)
        void* edx_1 = eax + edx_2 + 0xad8
        
        do
            if (*edx_1 == edi)
                goto label_41953a
            
            eax_2 += 1
            edx_1 += 0x50
        while (eax_2 s< esi)
    
    eax_2 = 0xffffffff
    label_41953a:
    int32_t eax_3
    eax_3.b = sub_4ba0e0(eax + edx_2 + 0xad8, eax_2) == 2
    return eax_3
}
