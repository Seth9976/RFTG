// 函数名称: sub_4b71c0
// 虚拟地址: 0x4b71c0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_4b71c0(void* arg1, void* arg2)
{
    // 第一条实际指令: void* eax = sub_468810(*(arg1 + 0x1e4))
    void* eax = sub_468810(*(arg1 + 0x1e4))
    void* ebx = eax
    
    if (ebx != 0)
        int32_t i = 0
        
        if (*(ebx + 0x140) s> 0)
            do
                if (*eax == *(arg2 + 4))
                    *(eax + 0x30) = 0
                
                i += 1
                eax += 0x50
            while (i s< *(ebx + 0x140))
    else
        ebx = sub_469720(arg2, arg1)
        *(arg1 + 0x1e4) = *(ebx + 0x1d4)
        sub_4b6cc0(arg1)
    
    if (sub_469460(ebx) != 0)
        sub_469260()
    
    return sub_4b6cc0(ebx) __tailcall
}
