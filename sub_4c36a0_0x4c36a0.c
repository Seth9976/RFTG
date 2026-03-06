// 函数名称: sub_4c36a0
// 虚拟地址: 0x4c36a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

struct _EXCEPTION_REGISTRATION_RECORD** __convention("regparm")sub_4c36a0(int32_t* arg1, void* arg2 @ esi)
{
    // 第一条实际指令: struct _EXCEPTION_REGISTRATION_RECORD** result = *arg1
    struct _EXCEPTION_REGISTRATION_RECORD** result = *arg1
    
    if (result != 0x10)
        if (result == 0xee03)
            int32_t ecx_1
            ecx_1.b = *(arg2 + 0x24) != 0
            *(arg2 + 0x20) = ecx_1
            return result
        
        if (result == 0xee01)
            *(arg2 + 0x20) = 2
            return result
        
        if (result == 0xee02)
            *(arg2 + 0x20) = 3
            return result
        
        if (result == 0xd)
            *(arg2 + 0x25) = 0
            return result
        
        int32_t* ebx_1 = *(arg2 + 0x3c)
        
        if (ebx_1 != 0)
            char* ecx
            int32_t edx
            
            if (result != 8)
                result = sub_505e40(ecx, ebx_1, result)
            else
                result = sub_506130(result, edx, 0)
        
        if (*(arg2 + 0x20) == 1 && *(arg2 + 0x24) != 0)
            *(arg2 + 0x20) = 0
            *(arg2 + 0x24) = 0
    else
        result = *(arg2 + 0x20)
        
        if (result == 0)
            *(arg2 + 0x20) = 1
            *(arg2 + 0x24) = 1
            return 1
        
        if (result == 1)
            *(arg2 + 0x20) = 0
            *(arg2 + 0x24) = 0
    
    return result
}
