// 函数名称: sub_438ca0
// 虚拟地址: 0x438ca0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_438ca0(int32_t arg1, int32_t* arg2 @ esi)
{
    // 第一条实际指令: if (*arg2 == 0x26)
    if (*arg2 == 0x26)
        arg1.b = 0
        return arg1
    
    int32_t edi = arg2[1]
    int32_t eax
    
    if (edi != 0xffffffff)
        eax = sub_46b360(edi)
    else
        eax = arg1 | edi
    
    int32_t ecx = *arg2
    
    if (ecx u<= 0x27)
        switch (ecx)
            case 0, 3, 4, 5, 0xd, 0xe, 0xf, 0x11, 0x13, 0x14, 0x15, 0x16, 0x1e, 0x23, 0x25, 0x26
                if (eax != *(data_27e7a40 + 0x74))
                    return 1
        
        return 0
    
    sub_4c5870("Halt", &data_83f3d3, "..\code\RFTGClient.cpp", 0x2d6b, "IsDisplayAction")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
