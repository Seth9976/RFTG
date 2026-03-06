// 函数名称: sub_4139c0
// 虚拟地址: 0x4139c0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __convention("regparm")sub_4139c0(int32_t* arg1)
{
    // 第一条实际指令: int32_t* edi = arg1
    int32_t* edi = arg1
    int32_t ebx = edi[0x50]
    int32_t esi = 0
    
    if (ebx s> 0)
        do
            if (edi[0xc] == 6)
                arg1 = sub_4194b0()
                
                if (*edi == arg1)
                    arg1.b = 1
                    return arg1
            
            esi += 1
            edi = &edi[0x14]
        while (esi s< ebx)
    
    arg1.b = 0
    return arg1
}
