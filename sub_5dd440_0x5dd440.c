// 函数名称: sub_5dd440
// 虚拟地址: 0x5dd440
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5dd440(void* arg1)
{
    // 第一条实际指令: if (arg1 != 0)
    if (arg1 != 0)
        HANDLE hFile = *(arg1 + 0x1c)
        
        if (hFile != 0xffffffff)
            int32_t fileSize
            
            if (GetFileSizeEx(hFile, &fileSize) != 0)
                return fileSize
            
            sub_5dc5a0("windows_file_size")
            return 0xffffffff
    
    sub_5cce60("windows_file_size: invalid context/file not opened")
    return 0xffffffff
}
