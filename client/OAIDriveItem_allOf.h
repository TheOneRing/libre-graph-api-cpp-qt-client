/**
 * Open Graph API
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: v0.1.0
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIDriveItem_allOf.h
 *
 * 
 */

#ifndef OAIDriveItem_allOf_H
#define OAIDriveItem_allOf_H

#include <QJsonObject>

#include "OAIDeleted.h"
#include "OAIDriveItem.h"
#include "OAIFileSystemInfo.h"
#include "OAIFolder.h"
#include "OAIImage.h"
#include "OAIObject.h"
#include "OAIOpenGraphFile.h"
#include <QList>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIDriveItem_allOf : public OAIObject {
public:
    OAIDriveItem_allOf();
    OAIDriveItem_allOf(QString json);
    ~OAIDriveItem_allOf() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getContent() const;
    void setContent(const QString &content);
    bool is_content_Set() const;
    bool is_content_Valid() const;

    QString getCTag() const;
    void setCTag(const QString &c_tag);
    bool is_c_tag_Set() const;
    bool is_c_tag_Valid() const;

    OAIDeleted getDeleted() const;
    void setDeleted(const OAIDeleted &deleted);
    bool is_deleted_Set() const;
    bool is_deleted_Valid() const;

    OAIOpenGraphFile getFile() const;
    void setFile(const OAIOpenGraphFile &file);
    bool is_file_Set() const;
    bool is_file_Valid() const;

    OAIFileSystemInfo getFileSystemInfo() const;
    void setFileSystemInfo(const OAIFileSystemInfo &file_system_info);
    bool is_file_system_info_Set() const;
    bool is_file_system_info_Valid() const;

    OAIFolder getFolder() const;
    void setFolder(const OAIFolder &folder);
    bool is_folder_Set() const;
    bool is_folder_Valid() const;

    OAIImage getImage() const;
    void setImage(const OAIImage &image);
    bool is_image_Set() const;
    bool is_image_Valid() const;

    OAIObject getRoot() const;
    void setRoot(const OAIObject &root);
    bool is_root_Set() const;
    bool is_root_Valid() const;

    qint64 getSize() const;
    void setSize(const qint64 &size);
    bool is_size_Set() const;
    bool is_size_Valid() const;

    QString getWebDavUrl() const;
    void setWebDavUrl(const QString &web_dav_url);
    bool is_web_dav_url_Set() const;
    bool is_web_dav_url_Valid() const;

    QList<OAIDriveItem> getChildren() const;
    void setChildren(const QList<OAIDriveItem> &children);
    bool is_children_Set() const;
    bool is_children_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString content;
    bool m_content_isSet;
    bool m_content_isValid;

    QString c_tag;
    bool m_c_tag_isSet;
    bool m_c_tag_isValid;

    OAIDeleted deleted;
    bool m_deleted_isSet;
    bool m_deleted_isValid;

    OAIOpenGraphFile file;
    bool m_file_isSet;
    bool m_file_isValid;

    OAIFileSystemInfo file_system_info;
    bool m_file_system_info_isSet;
    bool m_file_system_info_isValid;

    OAIFolder folder;
    bool m_folder_isSet;
    bool m_folder_isValid;

    OAIImage image;
    bool m_image_isSet;
    bool m_image_isValid;

    OAIObject root;
    bool m_root_isSet;
    bool m_root_isValid;

    qint64 size;
    bool m_size_isSet;
    bool m_size_isValid;

    QString web_dav_url;
    bool m_web_dav_url_isSet;
    bool m_web_dav_url_isValid;

    QList<OAIDriveItem> children;
    bool m_children_isSet;
    bool m_children_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIDriveItem_allOf)

#endif // OAIDriveItem_allOf_H
