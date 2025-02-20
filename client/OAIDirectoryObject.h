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
 * OAIDirectoryObject.h
 *
 * 
 */

#ifndef OAIDirectoryObject_H
#define OAIDirectoryObject_H

#include <QJsonObject>

#include "OAIDirectoryObject_allOf.h"
#include "OAIEntity.h"
#include <QDateTime>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIDirectoryObject : public OAIObject {
public:
    OAIDirectoryObject();
    OAIDirectoryObject(QString json);
    ~OAIDirectoryObject() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getId() const;
    void setId(const QString &id);
    bool is_id_Set() const;
    bool is_id_Valid() const;

    QDateTime getDeletedDateTime() const;
    void setDeletedDateTime(const QDateTime &deleted_date_time);
    bool is_deleted_date_time_Set() const;
    bool is_deleted_date_time_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString id;
    bool m_id_isSet;
    bool m_id_isValid;

    QDateTime deleted_date_time;
    bool m_deleted_date_time_isSet;
    bool m_deleted_date_time_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIDirectoryObject)

#endif // OAIDirectoryObject_H
