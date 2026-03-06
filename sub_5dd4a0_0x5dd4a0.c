// 函数名称: sub_5dd4a0
// 虚拟地址: 0x5dd4a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5dd4a0(void* arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: if (arg1 != 0)
    if (arg1 != 0)
        HANDLE hFile = *(arg1 + 0x1c)
        
        if (hFile != 0xffffffff)
            int32_t eax_1
            
            if (arg4 == 1)
                eax_1 = *(arg1 + 0x28)
            
            int32_t esi_1
            int32_t liDistanceToMove
            
            if (arg4 != 1 || eax_1 == 0)
                esi_1 = arg3
                liDistanceToMove = arg2
            else
                int32_t eax_2
                int32_t edx_1
                edx_1:eax_2 = sx.q(eax_1)
                liDistanceToMove = arg2 - eax_2
                esi_1 = sbb.d(arg3, edx_1, arg2 u< eax_2)
                hFile = *(arg1 + 0x1c)
            
            *(arg1 + 0x28) = 0
            enum SET_FILE_POINTER_MOVE_METHOD dwMoveMethod
            
            if (arg4 == 0)
                dwMoveMethod = FILE_BEGIN
            else if (arg4 == 1)
                dwMoveMethod = FILE_CURRENT
            else
                if (arg4 != 2)
                    sub_5cce60("windows_file_seek: Unknown value for 'whence'")
                    return 0xffffffff
                
                dwMoveMethod = FILE_END
            
            int32_t var_24 = esi_1
            int32_t newFilePointer = liDistanceToMove
            int32_t var_8 = esi_1
            
            if (SetFilePointerEx(hFile, liDistanceToMove, &newFilePointer, dwMoveMethod) != 0)
                return newFilePointer
            
            sub_5dc5a0("windows_file_seek")
            return 0xffffffff
    
    sub_5cce60("windows_file_seek: invalid context/file not opened")
    return 0xffffffff
}
