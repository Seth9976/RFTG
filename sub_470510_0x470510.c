// 函数名称: sub_470510
// 虚拟地址: 0x470510
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_t __convention("regparm")sub_470510(uint32_t arg1, void* arg2, int32_t arg3 @ esi, int32_t arg4 @ edi, int32_t arg5, int32_t arg6)
{
    // 第一条实际指令: int32_t ecx = 0
    int32_t ecx = 0
    
    if (arg4 s> 0)
        do
            arg1 = *(arg3 + (ecx << 2))
            
            if (arg1 != 0xffffffff)
                switch (sx.d(*(*(arg2 + arg1 * 0x14 + 0x46c) + 4)) - 3)
                    case 0, 0x50, 0x89, 0x8a
                        int32_t var_8 = 1
                        sub_469e10(arg2, arg5, 0xd, 0, arg3 + (ecx << 2), 1, arg6 + (ecx << 2), 1)
                        struct _EXCEPTION_REGISTRATION_RECORD** eax_6
                        eax_6.b = 1
                        return eax_6
            
            ecx += 1
        while (ecx s< arg4)
    
    arg1.b = 0
    return arg1
}
